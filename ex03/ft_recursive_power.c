/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 03:44:04 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/19 05:10:51 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power > 1)
		res = nb * ft_recursive_power(nb, power - 1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (res);
}
