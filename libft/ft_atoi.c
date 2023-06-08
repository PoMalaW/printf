#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    int sign;
    int num;

    i = 0;
    sign = 1;
    num = 0;

    while(nptr[i] == ' ' || (nptr[i] >= '\a' && nptr[i] <= '\r')) 
        i++;
    if(nptr[i] == '-')
        sign *= -1;
    if(nptr[i] == '-' || nptr[i] == '+')
        i++;
    while(nptr[i] >= 48 && nptr[i] <= 57)
    {
        num = num * 10 + (nptr[i] - 48);
        i++;
    }
    return(num * sign);
}