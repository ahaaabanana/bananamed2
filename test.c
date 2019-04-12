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
    int x = 50;
    int y = 9025;
   // swap(&x, &y,sizeof(int));
    //printf("x = %d, y = %d\n", x, y);
}