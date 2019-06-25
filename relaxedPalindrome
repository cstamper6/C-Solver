/* 
* C program to determine if the prompted input is a palindrome
* Disregards capitals, spaces, and punctuation
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 1000

int main()
{
  char text[MAX], c;
  int i;  //
  int ind, isPal;  //isPal=0=false; isPal=1=true

  puts("Type some text (then ENTER):");
  fgets(text, MAX, stdin);
  ind = strlen(text) - 2; // -1 for \n; -1 for 0 based index

  puts("Your input in reverse is:");
  for (i=ind; i>=0; i--) {  //index is 0 based
    printf("%c",text[i]);
    text[i] = tolower(text[i]);  //changes chars to lowercase after print
  }
  printf("\n");

  //  for (i=len-1;i>=

  i = 0;
  while (ind >= 0) {  //iterates backwards last char to first
    if (!isalpha(text[i])) { //skips char if not alpha; checks with the same j
      i++;
    } else if (!isalpha(text[ind])) {  //skips char; checks with same i
      ind--;
    } else if (text[i] == text[ind]) {
      i++;  //continues inwards to next char if match
      ind--;
      isPal = 1;  //bool for print
    } else {
      isPal = 0;
      break;
    }
  }
  if (isPal == 1) {
    printf("Found a palindrome!\n");
  }
}
