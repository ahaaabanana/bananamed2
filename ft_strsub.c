#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;
    size_t strsize;

    if (!s)
        return (NULL);
    i = 0;
    strsize = ft_strlen(s);
    substr = (char*)malloc(sizeof(*substr) * len + 1);
    if (substr)
    {
        while (i < len && (start + i) < strsize)
        {
            substr[i] = s[start + i];
            i++;
        }
        substr[i] = '\0';
    }
    return (substr);
}
// "wellgoodjob"