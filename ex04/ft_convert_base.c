/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:43:57 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/22 01:59:46 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char ft_find(char *base, char c)
{
    int n = 0;

    while(base[n])
    {
        if (base[n] == c)
            return (n);
    }
    return (-1);
}

char ft_len(char *str)
{
    int n = 0;

    while (str[n])
    {
        n++;
    }
    return (n);
}

char converter(char *nbr, char *base, char *to)
{
    int n = 0;
    char *res;
    int to_len = ft_len(to);
    int base_len = ft_len(base);
    int i = 0;
    int t = 1;

    while(nbr[n] == 32)
    {
        n++;
    }
    while(nbr[n] == 45 || nbr[n] == 43)
    {
        t *= (44 - nbr[n]);
        n++;
    }
    
    while(nbr[n] < 58 && nbr[n] > 47)
    {
        
    }
    return (res);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{

}
