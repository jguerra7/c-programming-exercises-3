#include <stdio.h>

int main(void)
{
  float x = 7.3462346333;
  // exponential notation, left-justified, field size of 8, one digit
  // after the decimal point
  printf("%-8.1e\n", x);
  // exponential notation, right-justified, field size of 10, six
  // digits after the decimal point
  printf("%10.6e\n", x);
  // fixed-decimal notation, left-justified, field size of 8, three
  // digits after the decimal point
  printf("%-8.3f\n", x);
  // fixed-decimal notation, right-justified, field size of 6, no
  // digits after the decimal point
  printf("%6.f\n", x);

  return 0;
}
