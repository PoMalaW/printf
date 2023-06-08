#include "libft.h"

size_t  ft_getstart(char const *s1, char const *set)
{
    size_t i;
    size_t len;

    i = 0;
    len = ft_strlen(s1);

    while(i < len)
    {
        if(ft_strchr(set, s1[i]) == 0)
            break;
        i++;
    }
    return(i);
}

size_t  ft_getend(char const *s1, char const *set)
{
    size_t i;
    size_t len;

    i = 0;
    len = ft_strlen(s1);
    while(i < len)
    {
        if(ft_strchr(set, s1[len - i - 1]) == 0)
            break;
        i++;
    }
    return(len - i);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    char *trim;

    if (s1 == NULL)
        return NULL;
    if (set == NULL)
        return strdup(s1);
    start = ft_getstart(s1, set);
    end = ft_getend(s1, set);
    if (start >= end)
        return strdup("");
    trim = (char *)malloc(sizeof(*trim) * (end - start + 1));
    if (trim == NULL)
        return NULL;
    strncpy(trim, s1 + start, end - start);
    trim[end - start] = '\0';
    return trim;
}