/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:42:25 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/21 18:42:26 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int how_long(char **sarp, char *spr, int size)
{
    int n = 0;
    int i = 0;
    int ret;
    
    while (spr[n])
    {
        n++;
    }
    ret = n*(size-1);
    n = 0;
    while(size > n)
    {
        i = 0;
        while(sarp[n][i])
        {
            i++;
        }
        ret += i;
        n++;
    }
    
    return (ret+1);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *ret;
    int a;
    int n = 0;
    int i = 0;
    int s = 0;
    
    if (!size)
        return ((char *)malloc(sizeof(char)));
    
    a = how_long(strs,sep,size);
    ret = (char *)malloc(sizeof(char)*a);
    while (s < size)
    {
        i = 0;
        while(strs[s][i])
        {
            ret[n] = strs[s][i];
            n++;
            i++;
        }
        s++;
        i=0;
        while(sep[i] && s < size)
        {
            ret[n] = sep[i];
            n++;
            i++;
        }
    }
    ret[a-1] = '\0';
    return (ret);
}
