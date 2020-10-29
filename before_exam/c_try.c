/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_try.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 09:13:29 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/29 09:22:35 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct	s_point
{
	int		i;
	int		l;
	char	*test;
}				t_test_i;

int		main()
{
	t_test_i tab[4];

	tab[0].i = 5;
	tab[1].test = "chien";
	printf("0=%d,  1=%s", tab[0].i, tab[1].test);
}
