#include<stdio.h>

int main() 
{
	int n,i,j,k;

	printf("Choose the type of matrix you want to multiply\n");
	printf("1. 3x3\n2. 2x2\n3. 3x2\n4. 2x3\n");
	
	int a[3][3],b[3][3],result[3][3];
	
	scanf("%d",&n);
	
	printf("Enter the elements of your first matrix\n");
	if (n==1){
		for (i=0;i<9;i++)
			scanf("%d",&a[i/3][i%3]); 
		printf("Enter the elements of your second matrix\n");
		for (j=0;j<9;j++)
			scanf("%d",&b[j/3][j%3]);




		for (int i=0;i<3;i++) {
			for (int j=0;j<3;j++) {
				result[i][j] = 0;
			}
		}

		for (int i=0;i<3;i++) {
			for (int j=0;j<3;j++) {
				for (int k=0;k<3;k++) {
					result[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		printf("The Resultant Matrix is:\n");
		for (i=0;i<3;i++) {
			for (j=0;j<3;j++) {
				printf("%d\t", result[i][j]);
				}
			printf("\n");
			}
	
	}
		return 0;
}


