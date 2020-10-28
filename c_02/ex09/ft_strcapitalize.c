/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 10:23:53 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/19 14:14:59 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_alpha(char c)
{
	int				i;

	i = 0;
	while (1)
	{
		if (c >= '0' && c <= '9')
			return (1);
		else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			return (1);
		else
			return (0);
	}
}

int		is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int		not_alpha(char c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		if (!(c >= '0' && c <= '9'))
			return (1);
		else
			return (0);
	else
		return (0);
}

char	*ft_returnstr(char *str, unsigned int i, int b)
{
	if (i == 0)
		b = 1;
	else if (not_alpha(str[i - 1]))
		b = 1;
	if (is_alpha(str[i]))
	{
		if (b == 1)
		{
			if (str[i] >= '0' && str[i] <= '9')
				b = 0;
			else if (is_uppercase(str[i]))
				b = 0;
			else
			{
				str[i] -= 32;
				b = 0;
			}
		}
		else if (is_uppercase(str[i]))
			str[i] += 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	int				b;

	i = 0;
	b = 0;
	while (str[i] != '\0')
	{
		str = ft_returnstr(str, i, b);
		i++;
	}
	return (str);
}
