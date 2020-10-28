/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 08:41:07 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/26 15:11:10 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int c_i;
	unsigned int c_l;

	c_i = 0;
	c_l = 0;
	while (dest[c_i] != '\0')
		c_i++;
	while (src[c_l] && c_l < nb)
	{
		dest[c_i] = src[c_l];
		c_l++;
		c_i++;
	}
	dest[c_i] = '\0';
	return (dest);
}
