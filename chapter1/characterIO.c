#include <stdio.h>

int main()
{
  int c = EOF;
    printf("%d\n", c);
}

/*copy input to output Vol 1*/
int my_main ()
{
  int c;
/*copy input to output Vol 1*/
  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }

  /*copy input to output Vol 2*/
  while ((c = getchar()) != EOF)
    putchar(c); 
  /*this Vol 2 shrinks the program 
    since it assigns c only one rather than Vol 1*/
}
