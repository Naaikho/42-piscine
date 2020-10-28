/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 11:43:44 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/25 16:50:28 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		maker(int **tab, char *tab_checker, int i, int j);

void	parser(char *dest, char **av)
{
	int i;
	int l;

	i = 0;
	l = 0;
	while (av[1][i])
	{
		if (av[1][i] >= '0' && av[1][i] <= '9')
		{
			dest[l] = av[1][i];
			l++;
		}
		i++;
	}
	dest[l] = '\0';
}

void	ft_putstr(int **tab)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = tab[i][j] + '0';
			write(1, &c, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	free(tab);
}

int		is_null(char **test, int **tab)
{
	int i;

	i = 0;
	while (test[1][i] != '\0')
		i++;
	if (i != 31 || tab[3][3] == 0)
		return (1);
	return (0);
}

int		is_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int		main(int ac, char **av)
{
	int		**tab;
	int		i;
	int		j;
	char	*test;

	if (ac != 2 || av[1][0] == '\0')
		return (is_error());
	tab = malloc(5 * sizeof(int *));
	i = 0;
	while (i < 4)
	{
		tab[i] = malloc(5 * sizeof(int));
		i++;
	}
	test = (char *)malloc(sizeof(char)* 17);
	parser(test, av);
	i = 0;
	j = 0;
	maker(tab, test, i, j);
	//if (is_null(av, tab))
		//return (is_error());
	ft_putstr(tab);
	free(test);
}
