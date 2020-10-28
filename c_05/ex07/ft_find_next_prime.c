/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 14:15:56 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/26 14:59:17 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_prime(int nb)
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

int		ft_next_prime(int nb)
{
	if (is_prime(nb))
		return (nb);
	else
		return (ft_next_prime(nb + 1));
}
