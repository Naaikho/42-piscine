/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljouenne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 10:47:14 by ljouenne          #+#    #+#             */
/*   Updated: 2020/10/20 09:24:32 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int		xy_creator(int argc, char **argv, int val, int x)
{
	int y;
	int i;
	int l;

	y = 0;
	i = 0;
	while (i + 1 < argc)
	{
		l = 0;
		while (1)
		{
			if (argv[i + 1][l] == '\0')
				break ;
			if (i == 0)
				x = (x * 10) + (argv[i + 1][l] - 48);
			else
				y = (y * 10) + (argv[i + 1][l] - 48);
			l++;
		}
		i++;
	}
	if (val == 0)
		return (x);
	else
		return (y);
}

int		main(int argc, char **argv)
{
	int x;
	int y;

	x = 0;
	y = 0;
	if (argc <= 1)
	{
		x = 9;
		y = 5;
	}
	else
	{
		x = xy_creator(argc, argv, 0, x);
		y = xy_creator(argc, argv, 1, x);
	}
	rush(x, y);
	return (0);
}
