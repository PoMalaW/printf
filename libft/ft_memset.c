#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    char *chars;

    i = 0;
    chars = (char *)s;
    while(i < n)
    {
        chars[i] = c;
        i++;
    }
    return(chars);
}