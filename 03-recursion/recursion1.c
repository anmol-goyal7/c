/* A Digital cruncher that takes a number (like 452) and adds up its individual digits (4+5+2=11). */

#include<stdio.h>
int sumdigits(int n)
{
	if (n==0) {
		return 0;
	}
	else {
		return ((n%10) + sumdigits(n/10));
	}
}

int main() {
	int num;
	printf("Enter a number: \n");
	scanf("%d", &num);

	printf("Sum of digits of %d is: %d\n", num, sumdigits(num));
	return 0;
}
	

