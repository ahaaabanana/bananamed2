#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *x1;
    unsigned char *x2;
    
    i = 0;
    x1 = (unsigned char*)s1;
    x2 = (unsigned char*)s2;
    while (i < n)
    {
        if (x1[i] < x2[i])
            return (-1);
        else if (x1[i] > x2[i])
            return 1;
        else
            i++;
    }
    return (0);
} 
