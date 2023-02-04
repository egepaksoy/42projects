/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:52:32 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/04 15:40:35 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_lastnb(int i)
{
	char	c;

	c = i % 10 + 48;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		c = 56;
		nb = (nb + 1) * -1;
		ft_putnbr(nb / 10);
		write(1, &c, 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * -1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_print_lastnb(nb);
	}
	else if (nb < 9)
	{
		ft_print_lastnb(nb);
	}
}
