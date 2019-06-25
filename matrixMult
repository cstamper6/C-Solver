/* C program to multiply two MxM matrices */

#include <stdio.h>

int A[10][10];
int B[10][10];
int C[10][10];

int main() {

  // scan in size of matrices

  int input;
  scanf("%i", &input);

  // store matrix values

  for (int i = 0; i < input; i++) {
    for (int j = 0; j < input; j++) {
      scanf("%i", &A[i][j]);
    }
  }

  for (int i = 0; i < input; i++) {
    for (int j = 0; j < input; j++) {
      scanf("%i", &B[i][j]);
    }
  }

  // Multiply matrix A with matrix B and store in C

  for (int i = 0; i < input; i++) {
    for (int j = 0; j < input; j++) {
      for (int k = 0; k < input; k++) {
      C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

// print matrix C

  for (int i = 0; i < input; i++) {
    for (int j = 0; j < input; j++) {
      printf("%6d", C[i][j]);
    }
    printf("\n");
  }

}
