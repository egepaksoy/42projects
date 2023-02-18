/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:08:46 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/18 05:22:22 by epaksoy          ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	n;

	n = nb;
	while (n > 1)
	{
		if (ft_is_prime(n))
			return (n);
		n++;
	}
	return (2);
}
