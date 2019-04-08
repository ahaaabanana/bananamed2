#include "libft.h"

char    *ft_strstr(const char *haystack, const char *needle)
{
    size_t i;
    size_t j;
    size_t needle_size;

    if ((needle_size = ft_strlen(needle)) == 0)
        return ((char*)haystack);
    i = 0;
    while (haystack[i] != '\0')
    {
        j = 0;
        while (haystack[i] == needle[j] && haystack[i] != '\0')
        {
            i++;
            j++;
        }
        if (j == needle_size)
            return ((char*)haystack + i - j);
        i++;
    }
    return (NULL);   
}
