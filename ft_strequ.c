#include "libft.h"

int    ft_strequ(char const *s1, char const *s2)
{
    size_t size;

    if (!s1 || !s2)
        return (0);
    size = ft_strlen(s1) + 1;
    while (size)
    {
        size--;
        if (s1[size] != s2[size])
            return (0);
    }
    return (1);
}