/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:08:27 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/14 06:08:42 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	sz;

	sz = 0;
	while (str[sz])
	{
		sz++;
	}
	return (sz);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check(char *base)
{
	int	n;
	int	i;

	n = 0;
	while (base[n + 1])
	{
		if (base[n] <= 32 || base[n] == 127 || base[n] == 43 || base[n] == 45)
			return (0);
		i = n + 1;
		while (base[i])
		{
			if (base[i] == base[n])
				return (0);
			i++;
		}
		n++;
	}
	if (!n)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	b;

	if (!check(base))
	{
		return (0);
	}
	b = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= b)
	{
		ft_putnbr_base(nbr / b, base);
		ft_putchar(base[nbr % b]);
	}
	else
	{
		ft_putchar(base[nbr]);
	}
}
