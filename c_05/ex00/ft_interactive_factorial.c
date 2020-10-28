/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interactive_factorial.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 17:29:50 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/26 09:36:19 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int f;

	i = 0;
	if (nb <= 0)
		f = 0;
	else
		f = 1;
	while (i < nb)
	{
		f = f * (i + 1);
		i++;
	}
	return (f);
}