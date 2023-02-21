#include <stdio.h>
#include <stdlib.h>

unsigned int how_long(char *spr, char **sarp, int size)
{
    int n = 0;
    int ret;
    int i = 0;
    int rr = 0;
    
    while (size > i)
    {
      n = 0;
      while(sarp[i][n])
      {
        n++;
        rr++;
      }
      i++;
    }
    ret = rr*(size-1);
    i = 0;
    while (i < size)
    {
        n = 0;
        while (sarp[i][n])
        {
            n++;
        }
        ret += n;
        i++;
    }
    return (n);
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
    
    a = how_long(sep,strs,size);
    ret = (char *)malloc(sizeof(char)*a);
    while (n < a)
    {
        i = 0;
        while(strs[s][i])
        {
            ret[n] = strs[s][i];
            n++;
            i++;
        }
        i=0;
        while(sep[i] && sizeof(sep)+a < n)
        {
            ret[n] = sep[i];
            n++;
        }
        s++;
    }
    return (ret);
}
 
int main()
{
    char **sarp;
    sarp = (char **)malloc(3*(sizeof(char *)));
    sarp[0] = "merhaba";
    sarp[1] = "dunya";
    sarp[2] = "nbr";
    char *spr = " , ";
    printf("%s", ft_strjoin(3, sarp, spr));
}   
