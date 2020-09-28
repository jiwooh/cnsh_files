#include <stdio.h>

int n;

long long int f(int k) {
	long long int s=0;
	for (int i=1;i<=k;i++) {
		s+=i;
	}
	return s;
}

int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}
