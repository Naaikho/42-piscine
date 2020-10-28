/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 12:31:22 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/26 14:39:20 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int l;

	i = 2;
	l = 0;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0 && i != nb)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
