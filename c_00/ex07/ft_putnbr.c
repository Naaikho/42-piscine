/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 17:18:11 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/17 19:26:39 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printer(int length, int nb, int i, int no_i);
void	ft_write(int nb);

void	ft_putnbr(int nb)
{
	int length;
	int a;
	int nbc;
	int i;
	int no_i;

	ft_write(nb);
	if (nb == -2147483648)
		return ;
	if (nb < 0)
		nb = nb * -1;
	i = 0;
	nbc = nb;
	length = 0;
	while (1)
	{
		a = nbc % 10;
		nbc = nbc / 10;
		if (a - 1 == -1 && nbc == 0)
			break ;
		length++;
	}
	no_i = length - 1;
	ft_printer(length, nb, i, no_i);
}

void	ft_write(int nb)
{
	if (nb < 0)
		write(1, "-", 1);
	if (nb == -2147483648)
		write(1, "2147483648", 10);
}

void	ft_printer(int length, int nb, int i, int no_i)
{
	char array[length];
	char b;
	char printer;

	i = 0;
	while (i < length)
	{
		b = nb % 10;
		if (b == '0')
			break ;
		array[i] = b + '0';
		i++;
		nb = nb / 10;
	}
	i = 0;
	while (i < length)
	{
		printer = array[no_i];
		write(1, &printer, 1);
		no_i--;
		i++;
	}
}
