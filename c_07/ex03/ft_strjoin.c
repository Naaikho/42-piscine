/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcazeres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 09:16:59 by lcazeres          #+#    #+#             */
/*   Updated: 2020/10/28 11:49:41 by lcazeres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_len(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcat(char *tab, char *str, char *sep)
{
	int		i;
	int		l;

	if (tab[0] == '\0')
		i = 0;
	else
		i = ft_len(tab);
	l = -1;
	while (str[++l])
	{
		tab[i] = str[l];
		i++;
	}
	l = -1;
	i--;
	while (sep[++l])
		tab[++i] = sep[l];
	tab[++i] = '\0';
}

char	*ft_strjoin(int size, char str[2][10], char *sep)
{
	int		i;
	int		l;
	char	*tab;

	i = -1;
	l = 0;
	if (size <= 0)
		return (NULL);
	while (str[++i] && i < size)
		l += ft_len(str[i]);
	tab = malloc((sizeof(char) * l) + (ft_len(sep) * (size - 1)) + 1);
	tab[0] = '\0';
	i = -1;
	while (str[++i] && i < size - 1)
		ft_strcat(tab, str[i], sep);
	ft_strcat(tab, str[i], "\0");
	return (tab);
}
