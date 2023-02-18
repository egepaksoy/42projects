/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 02:44:28 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/18 03:43:01 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int res;

    res = 1;
    while (power > 0)
    {
        res *= nb;
        power--;
    }
    if (power < 0)
        return (0);
    return (res);
}
