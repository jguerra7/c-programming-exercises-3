/*
 * Chapter 2
 * Project 3
 *
 * Modify the program of project 2.2 so that it prompts the user to
 * enter the radius of the sphere.
 */
#include <stdio.h>

#define PI 3.1416

int main(void)
{
  // If the fraction is written as integer division, it is truncated
  // to the float 1.0.
  //float c = 4 / 3;
  float c = 4.0f / 3.0f;
  int r;

  printf("Enter radius (int): ");
  scanf("%d", &r);

  printf("Volume: %f\n", c * PI * r * r * r);

  return 0;
}
