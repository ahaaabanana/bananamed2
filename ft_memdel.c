#include "libft.h"

void    ft_memdel(void **ap)
{
    if (ap != NULL && *ap != NULL)
    {
        free(*ap);
        *ap = NULL;
    }
}

/* int     main()
{
    // char s[] = "pika pika";
    // ft_memdel(&s);
    // printf ("s", )
    char *s;
    s = (char*)malloc(sizeof(char) * 10);
    for (int i = 0; i < 10; i++)
        *(s + i) = 'r';
    printf("s = %s\n", s);
    printf("p = %p\n", s);
    free(s);
    printf("%s", s);
    printf("p = %p\n", s);
    //printf("%d", y);
} */