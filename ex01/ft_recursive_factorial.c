/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:18:13 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/18 05:18:34 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
		nb *= ft_recursive_factorial(nb - 1);
	else if (!nb)
		return (1);
	else
		return (0);
	return (nb);
}
