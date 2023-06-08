#include "libft.h"

char    *ft_strrchr(const char *s, int c)

{
    char *chars;
    int i;

    chars = (char *)s;
    i = ft_strlen(chars);
    while (i >= 0)
    {
        if(chars[i] == (char)c)
            return(&chars[i]);
        i--;
    }
    return(NULL);
}