/*
 * Write a program that asks the user to enter a value for x and then
 * displays the value of the following polynomial:
 * 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 */
#include <stdio.h>
#include <assert.h>

float power(float b, int x);

int main(void)
{
  float x, y;

  printf("Enter the value of x: ");
  scanf("%f", &x);
  printf("y = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
  y = 3*power(x, 5) + 2*power(x, 4) - 5*power(x, 3) - power(x, 2) + 7*x - 6;
  printf("y = %f\n", y);

  return 0;
}

float power(float b, int x)
{
  int i;
  float y = 1.0f;

  assert(x >= 0);
  for (i=0; i<x; i++) {
    y *= b;
  }
  return y;
}
