#include<stdio.h>
#include<stdlib.h> // Needed for malloc and rand()
#include<omp.h>
#include<time.h>   // Needed to seed the random number generator

int main()
{
    int n, i, j, k;
    int a[3][3], b[3][3], result[3][3];
    int fill_choice; // New variable for the sub-menu
    int fill_num; 

    // Pointers for the big matrix 
    int *big_a, *big_b;
    long long *big_result;

    // Seed the random generator so it's different every run
    srand(time(NULL));

    while(1) { 
        printf("\nChoose the type of matrix you want to multiply\n");
        printf("1. 3x3\n2. 2x2\n3. 1000x1000 (Speed Test)\n4. Exit\n");
        printf("Enter choice: ");
                
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
        }
        // --- UPDATED OPTION 3 START ---
        else if (n == 3) {
            printf("\n--- 1000x1000 CONFIGURATION ---\n");
            printf("How do you want to fill the matrices?\n");
            printf("1. Constant: Fill with a single number (e.g., all 5s)\n");
            printf("2. Random: Fill with random numbers (0-9)\n");
            printf("Enter choice: ");
            scanf("%d", &fill_choice);

            // Allocate Memory (12MB)
            big_a = (int*)malloc(1000 * 1000 * sizeof(int));
            big_b = (int*)malloc(1000 * 1000 * sizeof(int));
            big_result = (long long*)malloc(1000 * 1000 * sizeof(long long));

            if (fill_choice == 1) {
                printf("Enter the number to use: ");
                scanf("%d", &fill_num);
                
                // Parallel Fill for Constant
                #pragma omp parallel for
                for(i = 0; i < 1000*1000; i++) {
                    big_a[i] = fill_num;
                    big_b[i] = fill_num; 
                    big_result[i] = 0;
                }
            }
            else {
                printf("Generating random numbers... (Sequential fill for safety)\n");
                // Random Fill (Sequential loop is safer for rand())
                for(i = 0; i < 1000*1000; i++) {
                    big_a[i] = rand() % 10; // Random number 0-9
                    big_b[i] = rand() % 10;
                    big_result[i] = 0;
                }
            }

            printf("Calculating Matrix Multiplication...\n");
            double start = omp_get_wtime();

            // OpenMP Multiplication Logic (The fast part)
            #pragma omp parallel for private(j, k)
            for (i = 0; i < 1000; i++) {
                for (j = 0; j < 1000; j++) {
                    for (k = 0; k < 1000; k++) {
                        big_result[i*1000 + j] += big_a[i*1000 + k] * big_b[k*1000 + j];
                    }
                }
            }
            
            double end = omp_get_wtime();
            printf("Done! Time taken: %f seconds\n", end - start);
            
            // Print Top-Left result to prove it worked
            printf("Result[0][0] = %lld\n", big_result[0]);

            free(big_a); free(big_b); free(big_result);
        }
        // --- UPDATED OPTION 3 END ---

        else if (n == 4) {
             printf("Exiting...\n");
             break;
        }
        else {
            printf("Invalid input. Choose 1, 2, 3 or 4.\n");
        }
    }

    return 0;
}
