#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    int *p = &a;
    int *q = &b;

    printf("%d %d\n", a, b);
    printf("%d %d\n", *p, *q);

    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;

    printf("%d %d\n", a, b);

    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    for (int i = 0; i < 5; i++)
        printf("%d ", *(ptr + i));

    printf("\n");

    return 0;
}

