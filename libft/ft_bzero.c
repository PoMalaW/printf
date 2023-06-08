#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t i;
    char *schar;

    i = 0;
    schar = (char *) s;
    while(i < n)
    {
        schar[i] = '\0';
        i++;
    }
}