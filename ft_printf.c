#include "libftprintf.h"

//ft that choose wich printer use and give the variable a type
int ft_format(va_list parameter, const char format)
{
    int written;

    written = 0;
    if(format == 'c') //aff 1 char
        written += ft_printchar(va_args(parameter, char));
    else if (format == 's') //aff str
        written += ft_printstr(va_args(parameter, char*));
    else if(format == 'p') //arg void* aff en hexa
        written += ft_printpointvoid(va_args(parameter, void*));
    else if(format == 'd' || format == 'i') //nombre decimal || entier base 10
        written += ft_printdecimal10(va_args(parameter, int));
    else if(format == 'u') //aff unsigned nombre decimal base 10
        written += ft_printunsigned10(va_args(parameter,unsigned int));
    else if(format == 'x' || format == "X") //aff nombre hexa lettre min || maj
        written += ft_printhexamin(va_args(parameter, unsigned int), format);
    else if(format == '%') //aff signe %
        written += ft_printpercent();
    return(written);
}

int ft_printf(const char *format, ...)
{
    va_list parameters;
    size_t written;
    char currentchar;
    
    va_start(parameters, format);
    while((currentchar = *format) != '\0')
    {
        if(currentchar != %)
        {
            ft_putchar_fd(currentchar, 1);
            written++;
            continue; //go back to the while if it's not a %
        }
        format++;
        written += ft_format(parameters, format + 1);
    }
    return(written);
}