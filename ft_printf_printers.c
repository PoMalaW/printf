#include "ft_printf.h"

int ft_printchar(char parameter)
{
    ft_putchar_fd(parameter, 1);
    return(1);
}

int ft_printstr(char* parameter)
{
    if(parameter == NULL)
        return(ft_printf("(null)"));
    ft_putstr_fd(parameter, 1);
    return(ft_strlen(parameter));
}

int ft_printpercent()
{
    ft_putchar_fd('%',1);
    return(1);
}