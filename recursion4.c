#include <stdio.h>

int sum(int n) {

    if (n == 0) {
        return 0;
    }
    else {
        return n + sum(n-1);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Sum of numbers up to %d is: %d\n", num, sum(num));
    return 0;
}
