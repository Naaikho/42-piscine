/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 22:28:06 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/16 19:12:49 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putcomma(char i, char y, char z);
void	ft_printer(char i, char y, char z);

void	ft_print_comb(void)
{
	char i;
	char y;
	char z;

	i = '0';
	y = '1';
	z = '2';
	ft_printer(i, y, z);
}

void	ft_printer(char i, char y, char z)
{
	while (i <= '9')
	{
		y = '0';
		while (y <= '9')
		{
			z = '0';
			while (z <= '9')
			{
				if (i < y && y < z)
				{
					write(1, &i, 1);
					write(1, &y, 1);
					write(1, &z, 1);
					ft_putcomma(i, y, z);
				}
				z++;
			}
			y++;
		}
		i++;
	}
}

void	ft_putcomma(char i, char y, char z)
{
	if (!(i == '7' && y == '8' && z == '9'))
	{
		write(1, ",", 1);
	}
}
