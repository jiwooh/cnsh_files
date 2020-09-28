#include <stdio.h>
int s=0;
long long int f(long long int k) {
	if (s==0) {
		s+=k-10*(k/10);
	}
	if (k==0) {
		return s;
	}
	s+=k/10-10*(k/100);
	return f(k/10);
}
int main() {
	long long int n;
	scanf("%lld", &n);
	printf("%d", f(n));
}
