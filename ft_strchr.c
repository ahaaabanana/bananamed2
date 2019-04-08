#include "libft.h"

char     *ft_strchr(const char *s, int c)
{
    size_t i;

    i = -1;
    while (s[++i] != '\0')
        if (s[i] == (char)c)
            return ((char*)s + i);
    if (s[i] == (char)c)
        return ((char*)s + i);
    else
        return (NULL);
}
