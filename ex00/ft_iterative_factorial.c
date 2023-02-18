/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:41:29 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/18 02:31:37 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    unsigned int res;

    res = 1;
    while (nb)
    {
        res *= nb;
        nb--;
    }
    if (nb < 0)
        return (0);
    return (res);
}


