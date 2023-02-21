/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:06:27 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/20 10:07:38 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
  int *trr;
  int n;
  
  if (min >= max)
      return (0);
        
  trr = malloc((max - min) * 4);
  n = 0;
  while(n < (max - min))
  {
    trr[n] = min + n;
    n++;
  }
  return (trr);
}

