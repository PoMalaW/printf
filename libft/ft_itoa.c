#include "libft.h"

size_t  ft_intlen(long n)
{
    size_t len;
    
    len = 0;
    if(n < 0)
    {
        len++;
        n *= -1;
    }
    while(n >= 1)
    {
        n /= 10;
        len++;
    }
    return(len);
}

char    *ft_itoa(int n)
{
    char *str;
    size_t len;
    int sign;

    if (n == -2147483648)
        return (ft_strdup("-2147483648"));
    len = ft_intlen(n);
    if(n != 0)
        str = malloc((len + 1) * sizeof(char));
    else
        return(str = ft_strdup("0"));
    if(str == NULL)
        return(NULL);
    sign = 0;
    if(n < 0)
    {
        sign++;
        n *= -1;
    }
    str[len]= '\0';
    while(--len)
    {
        str[len] = (n % 10) + 48;
        n /= 10;
    }
    if(sign == 1)
        str[0] = '-';
    else
        str[0] = n % 10 + 48;
    return(str);
}