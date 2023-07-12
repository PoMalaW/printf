#include "ft_printf.h"

int ft_printhexapoint(unsigned long long parameter)
{
    int written;

    written = 0;
    if(parameter >= 16)
    {
        written += ft_printhexapoint(parameter / 16);
        written += ft_printhexapoint(parameter % 16);
    }
    else
    {
        if(parameter < 10)
            written += ft_printchar((parameter + '0'));
        else
                written += ft_printchar((parameter - 10 + 'a'));
    }
    return(written);
}

int ft_adress(unsigned long long parameter)
{
    int written;

    written = 0;
    if(parameter == 0)
    {
        written += ft_printf("(nil)");
        return(written);
    }
    else
    {
    written += ft_printchar('0');
    written += ft_printchar('x');
    }
    written += ft_printhexapoint(parameter);
    return(written);
}