#include "libft.h"

size_t      ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
    size_t      x;

	i = 0;
    x = ft_strlen(dst);
    if (size > x)
    {
        while (src[i] && i < size - x - 1)
        {
            dst[x + i] = src[i];
            i++;
        }
        dst[x + i] = '\0';
    }
    return (ft_strlen(src) + ((size < x) ? size : x));
}


