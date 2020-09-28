#include <stdio.h>

long long int n;

long long int abs(long long int) {
	return n>0?n:-n;
}

int main()
{
  scanf("%lld", &n);
  printf("%lld\n", abs(n));
}
