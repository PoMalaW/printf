#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int ft_printf(const char *format, ...);
int ft_format(va_list parameter, char format);
int ft_printchar(char parameter);
int ft_printstr(char* parameter);
int ft_printpercent();
int ft_printdecimal(int parameter);
int ft_printunsigned10(unsigned int parameter);
int ft_printhexa(unsigned int parameter, const char format);
int ft_adress(unsigned long long parameter);
int ft_printhexapoint(unsigned long long parameter);

#endif