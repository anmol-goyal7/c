#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	
	for (int i = 0; i < n; i = i +2) {
      			printf("*\n");
	     }
      		for (int j = 0; j > n; j = j - 2) {
	     		printf(" \n");
	}
return 0;
}
