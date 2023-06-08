#ifndef LIBFT_H
# define LIBFT_H

# include "libft.h"
# include <stdarg.h>

int ft_printf(const char *format, ...);
int ft_printchar(char parameter);
int ft_printstr(char* parameter);
int ft_printpointvoid(void *parameter);
int ft_printdecimal10(int parameter);
int ft_printunsigned10(unsigned int parameter);
int ft_printhexamin(unsigned int parameter, const char format);
int ft_printpercent();

#endif