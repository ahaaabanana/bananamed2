#include "libft.h"

char     *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t i;
    size_t dest_size;

    dest_size = ft_strlen(dest);
    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[dest_size + i] = src[i];
        i++;
    }
    dest[dest_size + i] = '\0';
    return (dest);
}
