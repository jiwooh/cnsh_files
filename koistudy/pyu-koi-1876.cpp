#include <stdio.h>

int n, m;

long long int f(long long int p, long long int q) {
	return (long long int)p-q > 0 ? (long long int)p-q : (long long int)q-p;
}

int main()
{
  scanf("%d%d", &n, &m);
  printf("%lld\n", f(n, m));
}
