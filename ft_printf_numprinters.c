#include "ft_printf.h"

int ft_printdecimal(int parameter)
{
    size_t  i;

    i = 0;
    if(parameter <= 0)
        i++;
    ft_putnbr_fd(parameter, 1);
    while(parameter != 0)
    {
        parameter /= 10;
        i++;
    }
    return(i);
}

int ft_printunsigned10(unsigned int n)
{
    size_t  i;

    i = 0;
    if (n / 10)
    {
        i += ft_printunsigned10(n / 10);
    }
    ft_putchar_fd('0' + n % 10, 1);
    i++;
    return(i);
}

int ft_printhexa(unsigned int parameter, const char format)
{
    int written;

    written = 0;
    if(parameter >= 16)
    {
        written += ft_printhexa(parameter / 16, format);
        written += ft_printhexa(parameter % 16, format);
    }
    else
    {
        if(parameter < 10)
            written += ft_printchar((parameter + '0'));
        else
        {
            if(format == 'X')
                written += ft_printchar((parameter - 10 + 'A'));
            if(format == 'x')
                written += ft_printchar((parameter - 10 + 'a'));
        }
    }
    return(written);
}