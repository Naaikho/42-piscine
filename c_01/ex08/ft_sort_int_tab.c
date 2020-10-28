/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 14:46:48 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/18 17:30:51 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int l;
	int swap;

	i = 0;
	l = 0;
	while (i < size)
	{
		l = 0;
		while (l < size)
		{
			if (tab[l] > tab[l + 1])
			{
				swap = tab[l];
				tab[l] = tab[l + 1];
				tab[l + 1] = swap;
			}
			l++;
		}
		i++;
	}
}
