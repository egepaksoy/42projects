/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:00:02 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/24 15:50:37 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

void	ft_strcpy(char *str, char *dest)
{
	int	n;

	n = 0;
	while (str[n])
	{
		dest[n] = str[n];
		n++;
	}
	dest[n] = '\0';
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			n;

	tab = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (0);
	n = 0;
	tab[ac].str = 0;
	while (n < ac)
	{
		tab[n].size = ft_strlen(av[n]);
		tab[n].str = av[n];
		tab[n].copy = (char *) malloc(sizeof(char) * (tab[n].size + 1));
		if (!tab[n].copy)
			return (0);
		ft_strcpy(tab[n].str, tab[n].copy);
		n++;
	}
	return (tab);
}
