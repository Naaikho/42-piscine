/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkviewline.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 10:07:37 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/25 16:10:53 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checkforward(int **tab, int i, int j, int c)
{
	int s;

	s = 0;
	while (j < 4)
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
		j++;
	}
	return (c);
}

int		ft_checkback(int **tab, int i, int d, int k)
{
	int s;

	s = 0;
	while (d >= 0)
	{
		if (tab[i][d] == 4)
		{
			k++;
			break ;
		}
		if (tab[i][d] > s)
		{
			s = tab[i][d];
			k++;
		}
		d--;
	}
	return (k);
}

int		ft_checktab(int check1, int check2, int c, int k)
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

int		ft_checkviewline(int **tab, char *tab_checker)
{
	int i;
	int j;
	int k;
	int c;
	int d;

	i = 0;
	while (i != 4)
	{
		j = 0;
		d = 3;
		c = 0;
		k = 0;
		c = ft_checkforward(tab, i, j, c);
		k = ft_checkback(tab, i, d, k);
		j = tab_checker[i + 8] - 48;
		d = tab_checker[i + 12] - 48;
		if (!(ft_checktab(j, d, c, k)))
			return (0);
		i++;
	}
	return (1);
}
