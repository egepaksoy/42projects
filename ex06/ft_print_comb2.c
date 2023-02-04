/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:52:19 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/04 15:40:49 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_ints(int i1, int i2, int i3, int i4)
{
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	c1 = i1 + 48;
	c2 = i2 + 48;
	c3 = i3 + 48;
	c4 = i4 + 48;
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, " ", 1);
	write(1, &c3, 1);
	write(1, &c4, 1);
	if (i1 != 9 || i2 != 8 || i3 != 9 || i4 != 9)
		write(1, ", ", 2);
}

void	ft_loop(int i1, int i2, int i3, int i4)
{
	while (i1 < 10)
	{
		i2 = 0;
		while (i2 < 10)
		{
			i3 = i1;
			while (i3 < 10)
			{
				i4 = i2 + 1;
				while (i4 < 10)
				{
					ft_print_ints(i1, i2, i3, i4);
					i4 += 1;
				}
				i3++;
			}
			i2++;
		}
		i1++;
	}
}

void	ft_print_comb2(void)
{
	int	i1;
	int	i2;
	int	i3;
	int	i4;

	i1 = 0;
	ft_loop(i1, i2, i3, i4);
}
