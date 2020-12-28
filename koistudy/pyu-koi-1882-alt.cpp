#include <stdio.h>

int a, n;

long long int pow(int a, int n) {
	if (n==1) {
		return a;
	}
	long long int s=1;
	for (i=1;i<=n;i++) {
		s*=n;
	}
	return s;
}

int main()
{
  scanf("%d%d", &a, &n);
  printf("%lld ", pow(a, n));
}
