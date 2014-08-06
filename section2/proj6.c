/*
 * Modify the program of 2.5 so that the polynomial is evaluated using
 * the following formula:
 * 
 * ((((3x + 2)x - 5)x - 1)x + 7)x - 6
 */
#include <stdio.h>

int main(void)
{
  float x, y;

  printf("Enter the value of x: ");
  scanf("%f", &x);
  printf("y = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
  y = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;
  printf("y = %f\n", y);

  return 0;
}
