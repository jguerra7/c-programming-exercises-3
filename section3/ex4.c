#include <stdio.h>

int main(void)
{
  int i, j;
  float x;

  printf("> ");
  scanf("%d%f%d", &i, &x, &j);
  printf("%d %f %d\n", i, x, j);

  return 0;
}
