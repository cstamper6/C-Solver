/* C program to compute n choose k */

#include <stdio.h>

int NchooseK(int n, int k) {

  if (k == 0 || k == n) {
    return 1;
  } else {
    return (NchooseK(n-1, k-1) + NchooseK(n-1, k));
  }
}


void main() {

  printf("Enter two integers (for n and k) separated by space:\n");

  int n, k, result;

  scanf("%d%d", &n, &k);

  result = NchooseK(n, k);

  printf("%d\n", result);

  if (n != 0 || k !=0) {
    main();
  }

}
