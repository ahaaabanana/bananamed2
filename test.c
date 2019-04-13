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
    char src[] = "armagedon-1";
    char dst[12];
    memmove(src + 4, src + 1, 14);
    printf("%s", src);
}