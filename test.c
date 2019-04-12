#include "libft.h"

void swap(void *a, void *b, size_t size) {
    char tmp;
    size_t i;
    for (i = 0; i < size; i++) {
        tmp = *((char*) b + i);
        printf("z = %c\n", tmp);
        *((char*) b + i) = *((char*) a + i);
        *((char*) a + i) = tmp;
    }
}

int main()
{
    char src[] = "test basic du memccpy !";
    char buff1[22];
    char *r2 = memccpy(buff1, src, 'm', 18);
    printf("%s", r2);
}