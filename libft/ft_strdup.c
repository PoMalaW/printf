#include "libft.h"

char    *ft_strdup(const char *s)
{
    char *dest;
    size_t i;
    
    i = 0;

    if(!s)
        return(NULL);
    dest = (char *) malloc((ft_strlen(s) + 1) * sizeof * dest);
    if(!dest || !s)
        return(NULL);
    while (s[i] != '\0')
    {
        dest[i] = s[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}