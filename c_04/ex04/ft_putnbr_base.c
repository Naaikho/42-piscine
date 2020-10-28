/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 09:34:48 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/27 17:22:54 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		bs_len(char *base)
{
	int		c;
	int		c_move;

	c = 0;
	while (base[c])
	{
		c_move = 0;
		while (base[c_move] != '\0')
		{
			if (c != c_move && base[c] == base[c_move])
				return (0);
			else if (base[c_move] == '-' || base[c_move] == '+')
				return (0);
			c_move++;
		}
		c++;
	}
	return (c);
}

void	recurs_base(int nbr, char *base, int b)
{
	int		div;
	int		mod;
	char	c;

	div = nbr / b;
	mod = nbr % b;
	if (div < b)
	{
		c = base[div];
		write(1, &c, 1);
	}
	else
		recurs_base(div, base, b);
	c = base[mod];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		b;
	char	c;

	i = 0;
	b = bs_len(base);
	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	if (b < 2 || nbr == 0 || nbr > 2147483647 || nbr < -2147483647)
		return ;
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		write(1, "-", 1);
	}
	if (nbr < bs_len(base))
	{
		c = base[nbr];
		write(1, &c, 1);
		return ;
	}
	recurs_base(nbr, base, b);
}
