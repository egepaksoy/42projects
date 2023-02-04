/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:51:58 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/04 23:32:39 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int		y;
	int		o;
	int		b;

	y = 0;
	while (y < 8)
	{
		o = y + 1;
		while (o < 9)
		{
			b = o + 1;
			while (b < 10)
			{
				ft_print(y + 48);
				ft_print(o + 48);
				ft_print(b + 48);
				if (y != 7)
					write(1, ", ", 2);
				b += 1;
			}
			o += 1;
		}
		y += 1;
	}
}
