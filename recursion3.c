#include<stdio.h>
int factorial(int n) {
	if (n<=1){
		return 1;
	}
	else {
		return (n * factorial(n-1));
	}
}

int main() {
	int num, result;
	printf("Enter a number: \n");
	scanf("%d",&num);

	printf("The factorial of the number is: %d\n", factorial(num));
	return 0;
}
