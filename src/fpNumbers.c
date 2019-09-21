/* C program to calculate various values of given input */

#include <stdio.h>

void main() {

	double input;
	double sum = 0;
	double min = TMP_MAX;
	double max = -TMP_MAX;
	double product = 1;

	printf("Enter 10 floating-point numbers:\n");

	for (int i = 0; i < 10; i++) {

		scanf("%lf", &input);
		sum += input;
		if (min > input) { min = input; }
		if (max < input) { max = input; }
		product *= input;
	}

	printf("Sum is %.5lf\nMin is %.5lf\nMax is %.5lf\nProduct is %.5lf\n", sum, min, max, product);
}
