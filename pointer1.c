#include <stdio.h>

void reset(int *p) {
    *p = 100;
}

int main() {
    int health = 50;
    
    reset(&health);

    printf("Health is now: %d\n", health);
    return 0;
}
