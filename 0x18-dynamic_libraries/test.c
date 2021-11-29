#include "operators.h"

int main(void)
{
  int a, b, ad, s, m, r, d;
  a = 66;
  b = -76;

  ad = add(a, b);
  s = sub(a, b);
  m = mul(a, b);
  d = div(a, b);
  r = mod(a, b);
  printf("+ %d \n - %d \n, * %d \n / %d \n mod %d \n", ad, s, m, d, r);

  return 0;
}
