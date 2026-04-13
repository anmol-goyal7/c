// the digit counter
#include<stdio.h>
int countdigits(int n)
{
	if (n==0) {
		return 0;
	}
	else {
		return 1 + countdigits(n/10);
	}
}

int main() {
	int num,count;
	printf("Enter a number: \n");
	scanf("%d",&num);

	printf("Number of digits is: %d\n",countdigits(num));
	return 0;
}
