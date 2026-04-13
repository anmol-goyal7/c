#include <stdio.h>

int main() {
    int nums[] = {10, 20, 30, 40, 50};
    int *ptr = nums; 

    for (int i = 0; i < 5; i++) {
    printf("%d\n",*ptr);
     
    (ptr++); 
    }
    
    return 0;
}
