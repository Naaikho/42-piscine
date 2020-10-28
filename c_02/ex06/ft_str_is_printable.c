/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 08:51:13 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/19 08:58:51 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\0')
		{
			break ;
		}
		if ((int)(str[i]) >= 32 && (int)(str[i]) <= 126)
		{
			;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}
