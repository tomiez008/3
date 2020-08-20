#include <stdio.h>
int main(void)
{
  float a, b;
  printf("Enter A : ");
  scanf("%f", &a);
  printf("Enter B : ");
  scanf("%f", &b);
  printf("%f x %f = %f", a, b, a*b);
  return 0;
}
