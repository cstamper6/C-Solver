/* C program to find the sum of two matrices represented by 2-D arrays */

#include <stdio.h>

int main() {
  	int A[3][3];    // matrix A
  	int B[3][3];    // matrix B
  	int C[3][3];    // matrix to store their sum
	int i,j;

	puts("Please enter 9 values for matrix A:");
  	for (i=0;i<3;i++) {	//3 values for each row
		for (j=0;j<3;j++) {
			scanf("%d",&A[i][j]);  //gets values for matrix a
		}
	}
	puts("Please enter 9 values for matrix B:");
        for (i=0;i<3;i++) {     //3 values for each row
                for (j=0;j<3;j++) {
                        scanf("%d",&B[i][j]);  //gets values for matrix b
                }
        }

	for (i=0;i<3;i++) {
                for (j=0;j<3;j++) {
			C[i][j]=A[i][j]+B[i][j];  //sums for matrix c
		}
	}

	puts("C = B + A =");
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
			printf("%10d", C[i][j]);  //prints 3 per line
		} printf("\n");
	}

}
