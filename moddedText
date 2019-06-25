/* C program to mod the text of the prompted input */

#include <stdio.h>
#include <string.h>
#define MAX 1024

int main () {

	char buf[MAX], c;
  	int len, length, i;


	do {
        	// read a line
		fgets(buf, MAX, stdin);
        	// calculate its length
		len = strlen(buf) -1;  // -1 for \n
        	// modify the line by switching characters
		if (len == 0) {  //exit upon  empty line
			break;
		}

		for (i=0; i<len; i++) {  //iterates and checks each letter then prints
			c = buf[i];
    			if (c == 'e'|| c == 'E') {
				c = '3';
			} if (c == 'i' || c == 'I') {
				c = '1';
			} if (c == 'o' || c == 'O') {
				c = '0';
			} if (c == 's' ||c == 'S') {
				c = '5';
			}
			printf("%c", c);
	        } 
		printf("\n");
  	} while (len > 1);
}
