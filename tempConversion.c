#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0,20 ..., 300 */

int main()
{
  char headingF[] = "Temperature Conversion Program (F - C)";
  char headingC[] = "Temperature Conversion Program (C - F)";
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;   /*lower limit of temperature table */ 
  upper = 300; /*upper limit */ 
  step = 20;   /*step size */

/*Fahrenheit to Celsius */
  fahr = lower;
  printf("%s\n", headingF);
  while (fahr <= upper){
    celsius = (5.0/9.0) * (fahr-32.0); 
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }  /*the purpose of while loop is that it repeats once per output line */

/*Celsius to Fahrenheit*/
  celsius = lower;
  printf("%s\n", headingC);
  while (celsius <= upper){
    fahr = (1.8 * celsius) + 32;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
