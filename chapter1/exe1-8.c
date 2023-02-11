#include <stdio.h>

/*a program that counts blanks, tabs, and newlines*/

int main()
{
  int c, n;

  n = 0;
  while ((c=getchar()) != EOF)
    if (c == '\n' || c == ' ' || c == '\t') {
      ++n;
    }
  printf("%d\n", n);
}
