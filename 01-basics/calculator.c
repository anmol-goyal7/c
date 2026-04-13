#include<stdio.h>
int main() {

printf("This calculator currently supports operation of 2 numbers only.\n This is a work in progress \n\n");
	float a, b, answer;
  char operator;
	
printf("Enter a number: \n");
	scanf("%f",&a);

printf("Enter the operator (+,-,*,/): \n");
	scanf(" %c",&operator);

printf("Enter the second number: \n");
	scanf("%f",&b);

switch (operator) {
	case '-': 
		answer= a-b;
		break;

	case '+':
		answer= a+b;
		break;

	case 'x':
		answer = a*b;
		break;

	case '*':
		answer =a*b;
		break;

	case '/':
		if (b==0) {
			printf("Error: Division by zero is not allowed.\n");
		}
		else
			answer =a/b;
		break;

	default:
		printf("Error: Invalid operator '%c'.\n", operator);
	break;
	}
	printf("The answer is: %0.1f\n", answer);

return 0;
}
