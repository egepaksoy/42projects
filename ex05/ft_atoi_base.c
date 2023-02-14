/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:11:11 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/14 05:17:05 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
      while ((s1[n] == s2[n] || s1[n]+32 == s2[n] || s1[n]-32 == s2[n]) && (s1[n] || s2[n]))
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
          if (!ft_strcmp(base, arr[n]))
          {
              return 1;
          }
          n++;
      }
      return 0;
  }

  int ft_strsearch(char c, char *base)
  {
      int n = 0;
      while(base[n])
      {
          if (c == base[n])
          {
              return n;
          }
          n++;
      }
      return 0;
  }

   int ft_atoi_base(char *str, char *base)
   {
       int n = 0;
       int rtn = 0;

       if (!check(base))
       {
           return 0;
       }

       int base_len = ft_strlen(base);

       while (str[n])
       {
           rtn = rtn*base_len+ft_strsearch(str[n], base);
           n++;
       }

       return rtn;
   }
