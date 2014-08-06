/*
 * Write a program that asks the user to enter a dollar-and-cents
 * amount, then displays the amount with 5% tax added.
 */
#include <stdio.h>

int main(void)
{
  float dollars;

  printf("Enter an amount: ");
  scanf("%f", &dollars);
  printf("With tax added: $%.2f\n", dollars * 1.05f);

  return 0;
}
