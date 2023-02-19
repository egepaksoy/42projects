/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:08:46 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/19 05:32:53 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = nb;
	while (n > 1)
	{
		if (!(nb % n) && nb != n)
			return (0);
		n--;
	}
	if (nb < 2)
		return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb > 2)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (2);
}
