/*
 * Chapter 2
 * Project 2
 *
 * Write a program that computes the volumn of a sphere with a
 * 10-meter radius, using the formula v = 4/3 * PI * r^3. Write the
 * fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3 and see what
 * happens?) Hint: C doesn't have an exponentiation operator, so
 * you'll need to multiply r by itself twice to compute r^3.
 */
#include <stdio.h>

#define PI 3.1416

int main(void)
{
  // If the fraction is written as integer division, it is truncated
  // to the float 1.0.
  //float c = 4 / 3;
  float c = 4.0f / 3.0f;
  int r = 10;

  printf("Volume: %f\n", c * PI * r * r * r);

  return 0;
}
