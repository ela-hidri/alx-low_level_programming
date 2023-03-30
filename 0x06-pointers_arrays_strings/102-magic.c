#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */

  /* ...so that this prints 98\n */
  printf("a[0] = %p\n", &a[0]);
  printf("a[1] = %p\n", &a[1]);
  printf("a[2] = %p\n", &a[2]);
  printf("a[3] = %p\n", &a[3]);
  printf("a[4] = %p\n", &a[4]);
  printf("n = %p\n", &n);
  printf(" p %d", *(p+5));
  printf(" p %d", *(p+1));
  printf(" p %d", *(p+2));
  printf(" p %d", *(p+3));
  printf(" p %d", *(p+4));
  return (0);
}
