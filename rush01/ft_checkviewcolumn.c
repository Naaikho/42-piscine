/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkviewcolumn.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msion <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 10:12:24 by msion             #+#    #+#             */
/*   Updated: 2020/10/25 16:12:01 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checkforward2(int **tab, int i, int j, int c)
{
	int s;

	s = 0;
	while (i < 4)
	{
		if (tab[i][j] == 4)
		{
			c++;
			break ;
		}
		if (tab[i][j] > s)
		{
			s = tab[i][j];
			c++;
		}
		i++;
	}
	return (c);
}

int		ft_checkback2(int **tab, int d, int j, int k)
{
	int s;

	s = 0;
	while (d >= 0)
	{
		if (tab[d][j] == 4)
		{
			k++;
			break ;
		}
		if (tab[d][j] > s)
		{
			s = tab[d][j];
			k++;
		}
		d--;
	}
	return (k);
}

int		ft_checktab2(int check1, int check2, int c, int k)
{
	if (check1 == 4)
		if (c != 4)
			return (0);
	if (check1 == 3)
		if (c != 3)
			return (0);
	if (check1 == 2)
		if (c != 2)
			return (0);
	if (check1 == 1)
		if (c != 1)
			return (0);
	if (check2 == 4)
		if (k != 4)
			return (0);
	if (check2 == 3)
		if (k != 3)
			return (0);
	if (check2 == 2)
		if (k != 2)
			return (0);
	if (check2 == 1)
		if (k != 1)
			return (0);
	return (1);
}

int		ft_checkviewcolumn(int **tab, char *tab_checker)
{
	int i;
	int j;
	int k;
	int c;
	int d;

	j = 0;
	while (j < 4)
	{
		i = 0;
		d = 3;
		c = 0;
		k = 0;
		c = ft_checkforward2(tab, i, j, c);
		k = ft_checkback2(tab, d, j, k);
		i = tab_checker[j + 0] - 48;
		d = tab_checker[j + 4] - 48;
		if (!(ft_checktab2(i, d, c, k)))
			return (0);
		j++;
	}
	return (1);
}
