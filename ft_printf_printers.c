#include "libftprintf.h"

int ft_printchar(char parameter)
{
    ft_putchar_fd(parameter, 1);
    return(1);
}

int ft_printstr(char* parameter)
{    
    ft_putstr_fd(parameter, 1);
    return(ft_strlen(parameter));
}

int ft_printpointvoid(void *parameter)
{

}

int ft_printdecimal10(int parameter)
{
    int i;

    i = 0;
    ft_putnbr_fd(parameter);
    while(parameter /= 10)
            i++;
    return(i);
}

int ft_printunsigned10(unsigned int parameter)
{
    
}

int ft_printhexamin(unsigned int parameter, const char format)
{

}

int ft_printpercent()
{
    ft_putchar_fd('%',1);
    return(1);
}