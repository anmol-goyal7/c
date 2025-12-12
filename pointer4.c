#include <stdio.h>

int main() {
    int nums[] = {10, 20, 30, 40, 50};
    
    int *ptr = nums; 
    printf("The third number is: %d\n",*(ptr+2));
    
    return 0;
}
