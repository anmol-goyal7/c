#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<omp.h>

#define SIZE 1000

void fillmatrix(int **matrix, int value) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			matrix[i][j] = value;
		}
	}
}

void multiplication(int **mat1, int **mat2, long long **result) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			result[i][j] = 0;
			for (int k = 0; k < SIZE; k++) {
				result[i][j] += (long long)mat1[i][k] * mat2[k][j];
			}
		}
	}
}

void multiplicationopenmp(int **mat1, int **mat2, long long **result) {
	int i,j,k;
	#pragma omp parallel for private(i, j, k) shared(mat1, mat2, result)
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			result[i][j] = 0;
			for (k = 0; k < SIZE; k++) {
				result[i][j] += (long long)mat1[i][k] * mat2[k][j];
			}
		}
	}
}

int main()
{
	int num1, num2, choice;
	int **matrix1, **matrix2;
	long long result;
	double time_with_openmp = 0, time_with_openmp = 0;

	matrix1 = (int **)malloc(SIZE * sizeof(int *));
	matrix2 = (int **)malloc(SIZE * sizeof(int *));
	result = (long long **)malloc(SIZE * sizeof(long
