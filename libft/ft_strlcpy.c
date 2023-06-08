#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
    if(!dst || !src)
        return(0);
    if(size > 0)
    {
        while(--size && src[i] != '\0')
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    i = ft_strlen(src);
    return(i);
}