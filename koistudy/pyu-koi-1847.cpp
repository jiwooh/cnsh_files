#include <stdio.h>

long long int f()
{
  return -2147483649LL;
}

int main()
{
  printf("%lld\n", f());
  return 0;
}
