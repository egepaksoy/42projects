/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:08:27 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/12 17:04:35 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>

 void ft_putchar(char c)
 {
     write(1, &c, 1);
 }

 char    *ft_strlowcase(char *str)
 {
     int    a;

     a = 0;
     while (str[a] != '\0')
     {
         if (65 <= str[a] && str[a] <= 90)
             str[a] += 32;
         a++;
     }
     return (str);
 }

 int ft_strlen(char *str)
 {
     int sz;

     sz = 0;
     while(str[sz])
     {
         sz++;
     }
     return sz;
 }

 int    ft_strcmp(char *s1, char *s2)
 {
     int    n;

     n = 0;
     while (s1[n] == s2[n] && (s1[n] || s2[n]))
     {
         n++;
     }
     return (s1[n] - s2[n]);
 }

 int check(char *base)
 {
     int n;
     char arr[4][17] = {"0123456789", "01", "0123456789abcdef", "poneyvif"};

     n = 0;
     while(n<4)
     {
         if (ft_strcmp(base, arr[n]) == 0)
         {
             return 1;
         }
         n++;
     }
     return 0;
 }

 void ft_putnbr_base(int nbr, char *base)
 {
     base = ft_strlowcase(base);
     int b = ft_strlen(base);
     if (check(base))
     {
         if (nbr < 0)
         {
            ft_putchar('-');
            nbr *= -1;
         }
         if (nbr >= b)
         {
             ft_putnbr_base(nbr / b, base);
             ft_putchar(base[nbr % b]);
         }
         else
         {
            ft_putchar(base[nbr]);
         }
     }
 }
