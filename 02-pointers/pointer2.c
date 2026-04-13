#include <stdio.h>

void copyValue(int *source, int *dest) {
    *source = *dest; 
}

int main() {
    int original = 99;
    int copy = 0;
    
    printf("Before copy: Original=%d, Copy=%d\n", original, copy);
    
    copyValue(&original, &copy);
    
    printf("After copy:  Original=%d, Copy=%d\n", original, copy);
    return 0;
}
