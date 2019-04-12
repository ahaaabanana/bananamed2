#include "libft.h"

char    *ft_strnew(size_t size)
{
    char *strnew;
    size_t  i;

    i = 0;
    strnew = (char*)malloc(sizeof(*strnew) * size + 1);
    if (strnew)
    {
        while (i < size  + 1)
            strnew[i++] = '\0';
    }
    return (strnew);
}