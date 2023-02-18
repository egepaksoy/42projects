/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 03:48:03 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/18 04:31:05 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
    int n;

    if (!index)
        return (0);
    else if (index < 0)
        return (-1);
    else if (index - 2 > 0)
        n = ft_fibonacci(index-2) + ft_fibonacci(index-1);
    else
        return (1);
    return n;
}
