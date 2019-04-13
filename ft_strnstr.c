#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;
    int     x;
    size_t needle_size;

    if ((needle_size = ft_strlen(needle)) == 0)
        return ((char*)haystack);
    if (ft_strlen(haystack) < needle_size || len < needle_size)
		return (NULL);
    i = 0;
    while (haystack[i] != '\0' && i <= (len - needle_size))
    {
        j = 0;
        x = i;
        while (haystack[x] == needle[j] && haystack[x] != '\0')
        {
            x++;
            j++;
        }
        if (j == needle_size)
            return ((char*)haystack + x - j);
        i++;
    }
    return (NULL);    
}

/* int     main()
{
    printf("%s", ft_strstr("MZIRIBMZIRIBMZP", "MZIRIBMZP"));
} */
