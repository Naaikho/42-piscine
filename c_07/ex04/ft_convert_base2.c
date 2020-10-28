/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:09:30 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/28 19:49:04 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		dest_len(long int nbr, char *base)
{
	long int i;
	long int l;

	i = 1;
	l = (long)ft_len(base);
	while (nbr > l)
	{
		nbr = nbr / l;
		i++;
	}
	return (i);
}

int		ft_atoi(char *nbr, int *b)
{
	int i;

	i = 0;
	while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == ' ')
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			*b *= -1;
		i++;
	}
	if ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == ' ')
		return (0);
	return (i);
}

char	*to_base(long int dec, char *base)
{
	char *dest;
	long int i;
	int l;

	i = dest_len(dec, base);
	l = ft_len(base);
	dest = malloc(sizeof(char) * dest_len(dec, base));
	while (dec > l)
	{
		dest[--i] = base[dec % l];
		dec /= l;
	}
	dest[i] = base[dec % l];
	return (dest);
}
