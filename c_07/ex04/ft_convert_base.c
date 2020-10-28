/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:25:14 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/28 19:49:10 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		ft_atoi(char *nbr, int *b);
int			ft_len(char *str);
char		*to_base(long int dec, char *base);

int			check_base(char *base)
{
	long int	i;
	long int	l;

	i = -1;
	while(base[++i])
	{
		l = -1;
		while (base[++l])
		{
			if (base[l] == base[i] && l != i)
				return (0);
			if (base[l] == '-' || base[l] == '+')
				return (0);
		}
	}
	return (1);
}

int			check_in_base(char c, char *base)
{
	while (*base)
	{
		if (c == *base)
			return (c);
		base++;
	}
	return (0);
}

long int	to_decimal(char *nbr, char *base, long int n)
{
	if (!*nbr)
		return (n);
	n = n * ft_len(base) + check_in_base(*nbr, base);
	return (to_decimal(++nbr, base, n));
}

char		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			i;
	int			b;
	long int	dec;
	long int	n;

	i = -1;
	b = 1;
	if (!*nbr || !check_base(base_from) || !check_base(base_to))
		return (NULL);
	nbr += ft_atoi(nbr, &b);
	while (nbr[++i])
		if (!check_in_base(nbr[i], base_from))
			return (NULL);
	n = 0;
	dec = to_decimal(nbr, base_from, n);
	return (to_base(dec, base_to));
	return (NULL);
}

#include <stdio.h>

int		main()
{
	char *a = ft_convert_base("4D0", "0123456789ABCDEF", "0123456789");
	printf("%s", a);
}
