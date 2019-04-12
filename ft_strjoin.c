#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *strconcat;
    size_t i;
    size_t j;

    if (!s1 || !s2)
        return (NULL);
    i = 0;
    j = 0;
    strconcat = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
    if (strconcat)
    {
        while (i < ft_strlen(s1))
        {
            strconcat[i] = s1[i];
            i++;
        }
        while (i < (ft_strlen(s1) + ft_strlen(s2)))
        {
            strconcat[i] = s2[j];
            i++;
            j++;
        }
    }
    return (strconcat);
}