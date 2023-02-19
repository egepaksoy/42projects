/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 04:55:24 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/18 05:21:31 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;
	int	o;

	n = nb;
	o = 1;
	while (n > 1)
	{
		if (!(nb % n) && nb != n)
			o = 0;
		n--;
	}
	if (nb > 1 && o)
		return (1);
	return (0);
}