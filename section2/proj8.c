/*
 * Write a program that calculates the remaining balance on a loan
 * after the first, second and third monthly payments:
 *
 * Enter amount of loan: 20000.00
 * Enter intereet rate: 5.0
 * Enter monthly payment: 306.56
 *
 * Balanee remaining after Eiret payment: $19T13.34
 * Ealanee remaining after eeoond payment: $19s25.25
 * Balance remaining after third payment: $19135.7l
 *
 * Display eaeh balanee with two digits after the deeimal point. Hint:
 * Eaeh month. the balanee
 * is deereased by the amount of the payment. but increased by the
 * balanee times the monthly
 * interest rate. To find the monthly interest rate. eonvert the interest
 * rate entered by the user to
 * a percentage inid divide it by 12.
 */
#include <stdio.h>

int main(void)
{
  float balance, rate, payment, monthly_rate;

  printf("Enter amount of loan:  ");
  scanf("%.2f", &balance);
  printf("Enter interest rate:   ");
  scanf("%.1f", &rate);
  printf("Enter monthly payment: ");
  scanf("%.2f", &payment);

  monthly_rate = rate * 0.01 / 12;
  balance = (balance - payment) * (1.0 + monthly_rate);
  printf("Balance remaining after first payment: $%.2f\n", balance);
  balance = (balance - payment) * (1.0 + rate*0.01);
  printf("Balance remaining after first payment: $%.2f\n", balance);
  balance = (balance - payment) * (1.0 + rate*0.01);
  printf("Balance remaining after first payment: $%.2f\n", balance);

  return 0;
}
