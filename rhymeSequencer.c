/* C program to sequence rhymes into a story */

#include <stdio.h>
#include <string.h>

char animals[20][15];
char lyrics[20][60];
int  number;

void nurseryrhyme(int current) {

  printf("%*s", current, "");                   // print "current" number of spaces

  if (current == 0) {
    printf("There was an old lady who swallowed a %s;\n", animals[0]);
  } else {
    printf("She swallowed the %s to catch the %s;\n", animals[current-1], animals[current]);
  }

  if(current < number-1) {                      
    nurseryrhyme(current+1);
  } else {
    current++;
  }

  if (strcmp(animals[current], "END\n") == 0) {
    for (int i = number - 1; i >= 0; i--) {
      printf("%*sI don't know why she swallowed a %s - %s", i, "", animals[i], lyrics[i]);
    }
  }
}


int main() {
  int i=0;

  while (1) {
    fgets(animals[i], 15, stdin);               // reads the next animal name
    if (strcmp(animals[i], "END\n") == 0) {     // if it is "END\n" - done reading
      break;
    }

    int length = strlen(animals[i]);
    animals[i][length - 1] = '\0';              // strips the newline at the end
    fgets(lyrics[i], 60, stdin);                // reads the lyric corresponding to the animal

    i++;
  }

  number = i;

  nurseryrhyme(0);
}
