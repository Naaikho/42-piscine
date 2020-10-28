/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 09:05:46 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/20 08:44:16 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	unsigned int i;

	i = 0;
	while (1)
	{
		if (str[i] == '\0')
		{
			break ;
		}
		else
		{
			if ((str[i]) >= 97 && (str[i]) <= 122)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
