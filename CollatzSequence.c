/* C program to compute the Collatz sequence of given input */

#include <stdio.h>

int main() {
	int n;

	puts("Please enter the starting number of the Collatz sequence:");
	scanf("%d", &n);

	printf("%d", n);
	do {
		if (n == 1) {
			printf("1");
			break;
		} else if (n%2 == 0) {
			n = n/2;
		} else {
			n = 3*n+1;
		}
		printf(", %d", n);
	} while (n > 1);
	printf("\n");
}
