/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacquist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 14:25:27 by aacquist          #+#    #+#             */
/*   Updated: 2020/10/17 19:04:57 by aacquist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str);
void	ft_rush(int x, int y);
void	ft_y(int y, int x, int i, int l);
void	ft_last_line(int x);

void	first_line(int x)
{
	int i;

	i = 0;
	while (i++ < x)
	{
		if (i == 1)
			ft_putchar("A");
		else if (i == x)
			ft_putchar("C\n");
		else
			ft_putchar("B");
	}
}

void	middle_line(int x, int y)
{
	int i;
	int j;

	j = 1;
	while (++j < y)
	{
		i = 0;
		while (i++ < x)
		{
			if (i == 1)
				ft_putchar("B");
			else if (i == x)
				ft_putchar("B\n");
			else
				ft_putchar(" ");
		}
	}
}

void	last_line(int x)
{
	int i;

	i = 0;
	while (i++ < x)
	{
		if (i == 1)
			ft_putchar("C");
		else if (i == x)
			ft_putchar("A\n");
		else
			ft_putchar("B");
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	if (x == 1 && y == 1)
	{
		ft_putchar("A\n");
		return ;
	}
	first_line(x);
	if (y == 1)
		return ;
	middle_line(x, y);
	last_line(x);
}
