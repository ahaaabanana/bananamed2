#include "libft.h"

char    *ft_strtrim(char const *s)
{
    char *strtrim;
    size_t len_s;
    size_t wspaces;
    size_t i;

    len_s = ft_strlen(s);
    wspaces = 0;
    i = 0;
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
        i++;
    wspaces += i;
    i = 0;
    while (s[len_s - i - 1] == ' ' || s[len_s - i - 1] == '\n' 
        || s[len_s - i - 1] == '\t')
        i++;
    s = s + wspaces;
    if (*s != '\0')
        wspaces += i;
    strtrim = (char*)malloc(sizeof(*strtrim) * (len_s - wspaces + 1));
    if (strtrim)
        ft_strncpy(strtrim, s, len_s - wspaces);
    return (strtrim);
}

/* int main()
{
    printf("%s", ft_strtrim("\t\n"));
} */

// "   princess consuela      x      \t"
// "good"