#include <stdio.h>

int main(void)
{
  int a, b, c;
  float x, y;

  printf("\n(a)\n");
  scanf("%d", &a);
  printf("%d\n", a);
  scanf(" %d", &a);
  printf("%d\n", a);

  printf("\n(b)\n");
  scanf("%d-%d-%d", &a, &b, &c);
  printf("%d, %d, %d\n", a, b, c);
  scanf("%d -%d -%d", &a, &b, &c);
  printf("%d, %d, %d\n", a, b, c);

  printf("\n(c)\n");
  scanf("%f", &x);
  printf("%f\n", x);
  scanf("%f ", &x);
  printf("%f\n", x);

  printf("\n(d)\n");
  scanf("%f,%f", &x, &y);
  printf("%f, %f\n", x, y);
  scanf("%f, %f", &x, &y);
  printf("%f, %f\n", x, y);

  return 0;
}
