#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0,20 ..., 300 */

int main()
{
  int fahrenheit;
  
  for (fahrenheit = 0; fahrenheit <= 300; fahrenheit = fahrenheit + 20)
    printf("%3d %6.1f\n", fahrenheit, (5.0/9.0)*(fahrenheit-32));
}

