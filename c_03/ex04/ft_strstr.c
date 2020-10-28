/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 09:41:38 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/26 15:14:32 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int l;

	l = 0;
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		l = 0;
		while (to_find[l] == str[i + l] && to_find[l] != '\0')
		{
			l++;
		}
		if (to_find[l] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
