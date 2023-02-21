/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:06:44 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/21 18:41:50 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    if (max - min <= 0)
    {
        *range = NULL;
        return 0;
    }
    *range = (int *)malloc(sizeof(int) * (max - min));
    if (!(*range))
        return 0;
    int n = 0;
    while (min < max)
    {
        *(*range + n) = min;
        min++;
        n++;
    }
    return (n);
}

