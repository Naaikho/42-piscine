/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2rush03.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 09:56:59 by ljouenne          #+#    #+#             */
/*   Updated: 2020/10/20 13:51:00 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str);
void	ft_rush(int x, int y);
void	rush(int x, int y);
void	ft_y(int y, int x, int l, int i);
void	last_line(int x, int y, int i);

void	rush(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_putchar("A");
		return ;
	}
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	else
	{
		ft_rush(x, y);
	}
}

void	ft_rush(int x, int y)
{
	int l;
	int i;

	l = 0;
	i = 0;
	ft_putchar("A");
	if (x > 1)
	{
		l = 0;
		while (l < x - 2)
		{
			ft_putchar("B");
			l++;
		}
		ft_putchar("C\n");
	}
	ft_y(x, y, l, i);
}

void	ft_y(int x, int y, int l, int i)
{
	if (y > 1)
	{
		i = 0;
		l = 0;
		while (i < y - 2)
		{
			l = 0;
			i++;
			ft_putchar("B");
			while (l < x - 2)
			{
				ft_putchar(" ");
				l++;
			}
			ft_putchar("B\n");
		}
		ft_putchar("A");
		i = 0;
	}
	last_line(x, y, i);
}

void	last_line(int x, int y, int i)
{
	i = 0;
	if (x > 1 && y > 1)
	{
		while (i < x - 2)
		{
			ft_putchar("B");
			i++;
		}
		ft_putchar("C");
	}
}
