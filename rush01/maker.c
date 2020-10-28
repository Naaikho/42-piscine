/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maker.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 15:30:36 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/25 16:06:08 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_line(int **tab, int pos, int t);
int		ft_check_column(int **tab, int pos, int t);
int		ft_checkviewline(int **tab, char *tab_checker);
int		ft_checkviewcolumn(int **tab, char *tab_checker);
void	ft_putstr(int **tab);

int		maker(int **tab, char *tab_checker, int i, int j)
{
	int t;

	if (j == 4)
	{
		j = 0;
		i++;
		return (maker(tab, tab_checker, i, j));
	}
	t = 1;
	while (t < 5)
	{
		if (ft_check_line(tab, i, t) && ft_check_column(tab, j, t))
		{
			tab[i][j] = t;
			ft_putstr(tab);
			if (ft_checkviewline(tab, tab_checker)
					&& ft_checkviewcolumn(tab, tab_checker))
				return (1);
			if (maker(tab, tab_checker, i, j + 1))
				return (1);
		}
		t++;
	}
	tab[i][j] = 0;
	return (0);
}
