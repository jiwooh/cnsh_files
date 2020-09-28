#include <stdio.h>

int a, n;

long long int pow(int a, int n) {
	if (n==1) {
		return a;
	} else if (n==2) {
		return (long long int)a*a;
	} else if (n%2) {
		return (long long int)(pow(pow(a, n/2), 2)*a);
	} else {
		return (long long int)pow(pow(a, n/2), 2);
	}
}

int main()
{
  scanf("%d%d", &a, &n);
  printf("%lld ", pow(a, n));
}
