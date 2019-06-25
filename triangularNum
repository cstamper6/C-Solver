/* C program to determine if the input is a triangular number */

#include <stdio.h>
#include <math.h>

void main() {

	int input;
	int tRoot;
	int tRootInt;
	int tNumber;

	printf("Number ?\n");
	scanf("%d", &input);

	tRoot = (sqrt(8*(input)+1)-1)/2;
        tRootInt = (int) tRoot;
        tNumber = (tRootInt*(tRootInt+1))/2;

	if (input == 0) {
		printf("Done\n");
		return;
	} else if (input == tNumber) {
		printf("%d is a triangular number\n", input);
		main();
	} else {
		printf("%d is not triangular, nearest triangular number below %d is %d\n", input, input, tNumber);
		main();
	}
}
