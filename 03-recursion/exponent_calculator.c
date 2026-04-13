#include <stdio.h>

int power(int base, int exp) {
    
    if (exp == 0) {
        return 1;
    }
    
    else { 
            return base * power(base, exp - 1); 
    }
}

int main() {
    int b, e;
    printf("Choose a number: ");
    scanf("%d", &b);
    printf("Choose its exponential power: ");
    scanf("%d", &e);

    printf("%d to the power of %d is: %d\n", b, e, power(b, e));
    return 0;
}
