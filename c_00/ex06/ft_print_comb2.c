/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 13:17:25 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/21 18:25:47 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writef(char c);
void	ft_printer(int a, int b, int c, int d);
void	ft_pasouf(int a, int b, int c, int d);
void	ft_nocomma(char ac, char bc, char cc, char dc);

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	ft_pasouf(a, b, c, d);
}

void	writef(char c)
{
	write(1, &c, 1);
}

void	ft_printer(int a, int b, int c, int d)
{
	char ac;
	char bc;
	char cc;
	char dc;

	if (((a * 10) + b) < ((c * 10) + d))
	{
		ac = a + '0';
		bc = b + '0';
		cc = c + '0';
		dc = d + '0';
		if (!(((a * 10) + b) == 98 && ((c * 10) + d) == 99))
		{
			ft_nocomma(ac, bc, cc, dc);
		}
		else
		{
			ft_nocomma(ac, bc, cc, dc);
		}
	}
}

void	ft_pasouf(int a, int b, int c, int d)
{
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			c = 0;
			while (c <= 9)
			{
				d = 0;
				while (d <= 9)
				{
					ft_printer(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_nocomma(char ac, char bc, char cc, char dc)
{
	writef(ac);
	writef(bc);
	writef(' ');
	writef(cc);
	writef(dc);
	if (!(ac == '9' && bc == '8' && cc == '9' && dc == '9'))
	{
		writef(',');
		writef(' ');
	}
}
