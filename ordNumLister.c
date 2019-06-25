/* C program to list ordinal numbers of given prompt */

#include <stdio.h>

void main() {

	int x;
	char * ord[20] = {"1st", "2nd", "3rd", "4th", "5th", "6th",
	"7th", "8th", "9th", "10th", "11th", "12th", "13th", "14th",
	"15th", "16th", "17th", "18th", "19th", "20th"};

	printf("Enter a number from 1 to 20:\n");
	scanf("%i", &x);

	if (x < 1 || x > 20) {
		printf("Number is not in the range from 1 to 20\n");
		return;
	} else {
		printf("Here are the first %i ordinal numbers:\n", x);
		for (int i = 0; i < x; i++) {
			printf("%s\n", ord[i]);
		}
	}
}
