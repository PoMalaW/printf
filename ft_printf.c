#include "ft_printf.h"

//ft that choose wich printer use and give the variable a type
int ft_format(va_list parameter, const char format)
{
    int written;

    written = 0;
    if(format == 'c') //aff 1 char
        written += ft_printchar(va_arg(parameter, int));
    else if (format == 's') //aff str
        written += ft_printstr(va_arg(parameter, char*));
    else if(format == 'p') //arg void* aff (should be in hexa)
        written += ft_adress(va_arg(parameter, unsigned long long));
    else if(format == 'd' || format == 'i') //decimal || int in base 10
        written += ft_printdecimal(va_arg(parameter, int));
    else if(format == 'u') //aff unsigned number decimal base 10
        written += ft_printunsigned10(va_arg(parameter, unsigned int));
    else if(format == 'x' || format == 'X') //aff hexa number min || maj letter
        written += ft_printhexa(va_arg(parameter, unsigned int), format);
    else if(format == '%') //aff a %
        written += ft_printpercent();
    return(written);
}

int ft_printf(const char *format, ...)
{
    va_list parameters;
    size_t  written;
    size_t  i;
    char    currentchar;
    
    i = 0;
    written = 0;
    va_start(parameters, format);
    while((currentchar = format[i++]) != '\0')
    {
        if(currentchar != '%')
        {
            ft_putchar_fd(currentchar, 1);
            written++;
            continue; //go back to the while if it's not a %
        }
        written += ft_format(parameters, format[i]);
        i++;
    }
    va_end(parameters);
    return(written);
}