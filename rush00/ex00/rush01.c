/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 18:45:44 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/17 18:57:32 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str);
void	ft_rush(int x, int y);
void	ft_y(int y, int x, int i, int l);
void	ft_last_line(int x);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		;
	}
	else
	{
		if (!(x <= 1 && y <= 1))
			ft_rush(x, y);
		else
			ft_putchar("/\n");
	}
}

void	ft_rush(int x, int y)
{
	int i;
	int l;

	if (!(x <= 1))
	{
		i = 0;
		ft_putchar("/");
		while (i < x - 2)
		{
			ft_putchar("*");
			i++;
		}
	}
	ft_putchar("\\\n");
	if (!(y <= 1))
	{
		l = 0;
		i = 0;
		ft_y(y, x, i, l);
	}
}

void	ft_y(int y, int x, int i, int l)
{
	while (i < y - 2)
	{
		if (!(x <= 1))
		{
			ft_putchar("*");
			l = 0;
			while (l < x - 2)
			{
				ft_putchar(" ");
				l++;
			}
		}
		i++;
		ft_putchar("*\n");
	}
	ft_last_line(x);
}

void	ft_last_line(int x)
{
	int i;

	if (!(x <= 1))
	{
		ft_putchar("\\");
		i = 0;
		while (i < x - 2)
		{
			ft_putchar("*");
			i++;
		}
	}
	ft_putchar("/\n");
}
