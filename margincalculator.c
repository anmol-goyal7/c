/* I've created this program so that I can calculate the number of classes that I can skip while maintaining my attendance.*/
#include<stdio.h>
int main()
{
	float a, b, margin, percentage;
	printf("How much attendance do you need?\n Answer in percentage: \n");
	scanf("%f",&percentage);

	printf("Enter the number of classes you've attended: \n");
	scanf("%f",&a);
	
	printf("Enter the number of classes you were absent: \n");
	scanf("%f",&b);
	
	margin= (a/(percentage/100))-(a+b);//This is the tricky part 
	
	printf("The total number of classes you can skip is:'%0.0f' \n", margin);
	return 0;
}

