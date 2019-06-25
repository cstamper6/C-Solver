/* C program to generate all binary patterns of length of given input */

#include <stdio.h>

int array[10];
int size;


  void binaryPattern(int array[], int n) {

    if (n > 0) {
      array[size - n] = 0;
      binaryPattern(array, n - 1);
      array[size - n] = 1;
      binaryPattern(array, n - 1);
    } else {
      for (int i = 0; i < size; i++) {
        printf("%u", array[i]);
      }
      printf("\n");
    }
  }


void main() {

  int n;
  scanf("%i", &n);
  size = n;

  binaryPattern(array, n);
}
