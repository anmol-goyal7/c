#include<stdio.h>
#include<omp.h>

int main()
{
    int n, i, j, k;
    int a[3][3], b[3][3], result[3][3];

    while(1) { 
        printf("\nChoose the type of matrix you want to multiply\n");
        printf("1. 3x3\n2. 2x2\n3. Exit\n");
                
        scanf("%d", &n);
        
        if (n == 1) {
            printf("Enter the elements of your first matrix\n");
            for (i = 0; i < 9; i++) {
                scanf("%d", &a[i / 3][i % 3]);
            }
            
            printf("Enter the elements of your second matrix\n");
            for (j = 0; j < 9; j++) {
                scanf("%d", &b[j / 3][j % 3]);
            }

            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    result[i][j] = 0;
                }
            }
        
            #pragma omp parallel for private(j, k)
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    for (k = 0; k < 3; k++) {
                        result[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            
            printf("The Resultant Matrix is:\n");
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    printf("%d\t", result[i][j]);
                }
                printf("\n");
            }
            break;
        }
        else if (n == 2) {
            printf("Enter the elements of your first matrix\n");
            for (i = 0; i < 4; i++) {
                scanf("%d", &a[i / 2][i % 2]);
            }

            printf("Enter the elements of your second matrix\n");
            for (j = 0; j < 4; j++) {
                scanf("%d", &b[j / 2][j % 2]);
            }

            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    result[i][j] = 0;
                }
            }

            #pragma omp parallel for private(j, k)
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    for (k = 0; k < 2; k++) {
                        result[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            
            printf("The Resultant Matrix is:\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    printf("%d\t", result[i][j]);
                }
                printf("\n");
            }
            break;
        }
        if (n==3) {
		printf("Exiting...\n");
		break;
	}
	else {
            printf("Invalid input. Choose either 1 or 2.\n");
        }
    }

    return 0;
}
