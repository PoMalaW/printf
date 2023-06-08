#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    size_t len;
    size_t i;

    i = 0;
    len = ft_strlen(s);
    str = malloc((len + 1) * sizeof(char));
    if (str == NULL)
        return(NULL);
    while(i < len)
    {
        str[i] = s[i];
        str[i] = (*f)(i, str[i]);
        i++;
    }
    str[i] = '\0';
    return(str);
}