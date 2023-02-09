/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 10:45:54 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/08 18:41:25 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	n_a;
	int	n_b;

	n_a = *a;
	n_b = *b;
	if (n_b != 0)
	{
		*a = n_a / n_b;
		*b = n_a % n_b;
	}
}
