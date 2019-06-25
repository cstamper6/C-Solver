/* C program to solve a maze */

#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

#define MAX 100

int maze[100][100];             // 100x100 is the maximum size needed
int wasHere[100][100];
int correctPath[100][100];
int width, height;
int startX, startY, endX, endY;

int recursiveSolve(int x, int y);

int main() {

  int x, y;
  scanf("%d%d", &width, &height);
  scanf("\n");    // This is needed to "eat" the newline after height,
                  // before the actual maze entries begin on the next line

  char tempchar;

  for(y=0; y < height; y++) {
    for(x=0; x < width; x++) {
      scanf("%c", &tempchar);
      maze[y][x]=tempchar;

      if (tempchar == 'S') {
        startX = x;
        startY = y;
      } else if (tempchar == 'F') {
        endX = x;
        endY = y;
      }

      wasHere[y][x] = 0;
      correctPath[y][x] = 0;

    }
    scanf("\n");
  }

  recursiveSolve(startX, startY);

  // Code to print the output maze
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width;  j++) {
      if (correctPath[i][j] == 1 && maze[i][j] != 'S') {
        maze[i][j] = '.';
      }
      printf("%c", maze[i][j]);
    }
    printf("\n");
  }

}


int recursiveSolve(int x, int y) {

  if (x == endX && y == endY) return 1; // If you reached the end
  if (maze[y][x] == '*' || wasHere[y][x]) return 0;
  // If you are on a wall or already were here
  wasHere[y][x] = 1;
  if (x != 0) // Checks if not on left edge
      if (recursiveSolve(x-1, y)) { // Calls method one to the left
          correctPath[y][x] = 1; // Sets that path value to true;
          return 1;
        }
  if (x != width - 1) // Checks if not on right edge
      if (recursiveSolve(x+1, y)) { // Calls method one to the right
          correctPath[y][x] = 1;
          return 1;
      }
  if (y != 0)  // Checks if not on top edge
      if (recursiveSolve(x, y-1)) { // Calls method one up
          correctPath[y][x] = 1;
          return 1;
      }
  if (y != height - 1) // Checks if not on bottom edge
      if (recursiveSolve(x, y+1)) { // Calls method one down
          correctPath[y][x] = 1;
          return 1;
      }
  return 0;

}
