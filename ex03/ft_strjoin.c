/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:42:25 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/26 08:42:35 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int full_len(int size, char **strs, char *sep)
{
    int n;
    int i;
    int t;

    i = 0;
    t = 0;
    while (i < size)
    {
        n = 0;
        while (strs[i][n])
        {
            n++;
            t++;
        }
        i++;
    }
    i = 0;
    while (sep[i])
    {
        i++;
    }
    t += i * (size - 1);
    return (t);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *s;
    int n;
    int e;
    int i;
    int a;

    e = full_len(size, strs, sep);
    s = (char *) malloc(e + 1);
    n = 0;
    a = 0;
    while (a < size)
    {
        i = 0;
        while (strs[a][i])
            s[n++] = strs[a][i++];
        a++;
        i = 0;
        while (a < size && sep[i])
            s[n++] = sep[i++];
    }
    s[n] = '\0';
    return (s);
}
#include <stdio.h>
int main(int ac, char **av)
{
    printf("%s", ft_strjoin(ac, av, " , "));
}
