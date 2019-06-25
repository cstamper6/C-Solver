/* C program to bubble sort strings in array WITHOUT use of C string library functions */

#include <stdio.h>
#include <string.h>

#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */


int my_compare_strings(char string1[], char string2[]) {

  /* 
  * -1 if string1 comes before string2 in alphabetical order
  * 0 if string1 is the same as string2
  * +1 if string1 comes after string2 in alphabetical order
  */

  int length;
  if (strlen(string1) > strlen(string2)) {
    length = strlen(string1);
  } else if (strlen(string2) > strlen(string1)) {
    length = strlen(string2);
  } else {
    length = strlen(string1);
  }

  for (int i = 0; i < length + 1; i++) {
    if (string1[i] == '\0' && string2[i] != '\0') {
      return -1;
    } else if (string2[i] == '\0' && string1[i] != '\0') {
      return 1;
    } else if (string1[i] < string2[i])  {
      return -1;
    } else if (string1[i] > string2[i]) {
      return 1;
    }
  }

  // if strings are the same
  return 0;
}

void my_swap_strings(char string1[], char string2[]) {
  char temp;    // char variable used in swapping one character at a time

  int length;
  if (strlen(string1) > strlen(string2)) {
    length = strlen(string1);
  } else if (strlen(string2) > strlen(string1)) {
    length = strlen(string2);
  } else {
    length = strlen(string1);
  }

  for (int i = 0; i < length + 1; i++) {
    temp = string1[i];
    string1[i] = string2[i];
    string2[i] = temp;
  }

}


int main()
{
  char Strings[NUM][LEN];

  printf("Please enter %d strings, one per line:\n", NUM);
  
  for (int i = 0; i < NUM; i++) {
    fgets(Strings[i], LEN, stdin);
  }

  puts("\nHere are the strings in the order you entered:");

  for (int i = 0; i < NUM; i++) {
    printf("%s", Strings[i]);
  }

  /* Bubble sort */
  /*
  * my_compare_strings() to compare two strings
  * If they are out of order, my_swap_strings() to swap their contents
  */

  for (int i = 0; i < NUM - 1; i++) {
    for (int j = 0; j < NUM - i - 1; j++) {
      if (my_compare_strings(Strings[j], Strings[j+1]) > 0) {
        my_swap_strings(Strings[j], Strings[j+1]);
      }
    }
  }

  /* Output sorted list */

  puts("In alphabetical order, the strings are:");

  for (int i = 0; i < NUM; i++) {
    printf("%s", Strings[i]);
  }

}
