/*
 * Write a program that asks the user to enter a US dollar amount and
 * then shows how to pay that amount using the smallest number of $20,
 * $10, $5, and $1 bills.
 */
#include <stdio.h>

int main(void)
{
  int dollars, i, bill, nbills;
  int bills[] = {20, 10, 5, 1};
  int bills_len = 4;

  printf("Enter a dollar amount: ");
  scanf("%d", &dollars);
  for (i=0; i<bills_len; i++) {
    if (dollars < 0) {
      break;
    }
    bill = bills[i];
    nbills = dollars/bill;
    printf("$%2d bills: %d\n", bill, nbills);
    dollars -= nbills * bill;
  }

  return 0;
}
