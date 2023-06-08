#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i = ft_strlen(dst);
    j = 0;

    if(size <= ft_strlen(dst))
        return(size + ft_strlen(src));
    while(src[j] != '\0' && i < (size - 1))
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return(ft_strlen(dst) + ft_strlen(&src[j]));
}