/* 
* C program to format given input by value 
* Values may be decimal, hex, or octal
*/

#include <stdio.h>

void main() {

	int input;
	int ints[6];

	printf("Enter six integers:\n");

	for (int i = 0; i < 6; i++) {
		scanf("%i", &input);
		ints[i] = input;
	}

	// prints header and first line of ints
	printf("1234567890bb1234567890\n%*i%*i\n", 10, ints[0], 12, ints[1]);
	// prints next two lines of ints
	printf("%*i%*i\n%*i%*i\n", 10, ints[2], 12, ints[3], 10, ints[4], 12, ints[5]);

}
