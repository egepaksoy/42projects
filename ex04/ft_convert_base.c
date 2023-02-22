/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:43:57 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/22 10:23:06 by epaksoy          ###   ########.fr       */
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

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int base_len = ft_len(base_from);
    int to_len = ft_len(base_to);
    int tmp;
    char *res;
    int n;

    n = 0;
    while (nbr[n])
    {
        
    }

}
