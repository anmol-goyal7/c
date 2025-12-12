#include <stdio.h>

int main() {
    int gold = 10;
    int *ptr = &gold;    // ptr points to gold
    int **pptr = &ptr;   // pptr points to ptr
    
    printf("Original Gold: %d\n", gold);

    **pptr = 1000;

    printf("New Gold: %d\n", gold);
    return 0;
}
