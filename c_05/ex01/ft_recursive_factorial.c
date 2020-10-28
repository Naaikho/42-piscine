/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 18:30:58 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/26 09:36:07 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		recurs(int nb, int ncp, int i)
{
	i++;
	if (nb <= 0)
		return (0);
	if (i == ncp)
		return (nb);
	return (recurs(nb * i, ncp, i));
}

int		ft_recursive_factorial(int nb)
{
	int i;
	int ncp;

	ncp = nb;
	i = 0;
	return (recurs(nb, ncp, i));
}
