/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 11:56:14 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/26 12:16:53 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int d;
	int l;

	i = 0;
	l = 0;
	d = 0;
	while (d < nb)
	{
		d = i * i;
		i++;
	}
	l = (i + (nb / i)) / 2;
	if (nb != (l * l))
		return (0);
	return (l);
}
