#include "libft.h"

char    *ft_strchr(const char *s, int c)

{
    char *chars;
    
    chars = (char *)s;

    while (*chars != '\0')
    {
        if(*chars == (char)c)
            return(chars);
        chars++;
    }
    if(c == 0)
        return(chars);
    return(NULL);
}