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
    int *x;
    int n = 100;
    x = (int*)malloc(sizeof(*x) * n);
    for (int i = 0; i < n; i++)
        x[i] = i * i;
    for (int i = 0; i < n; i++)
        printf("%d ", x[i]);
    printf("\n\n");
    // for (int i = 0; i < 3; i++)
        free(x);
    for (int i = 0; i < n; i++)
        printf("%d ", x[i]);
    printf("\n");
    return (0);
}