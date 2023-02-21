/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 09:31:25 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/20 09:56:03 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int ft_len(char *src)
{
  int n;

  n = 0;
  while (src[n])
    n++;
  return (n);
}

char *ft_strdup(char *src) {
    char *str;
    unsigned int n;

    n = ft_len(src);
    str = (char*)malloc(n + 1);

    if (str == NULL) {
        return 0;
    }

    while (n > 0)
    {
      str[n] = src[n];
      n--;
    }
    str[0] = src[0];

    return (str);
}
