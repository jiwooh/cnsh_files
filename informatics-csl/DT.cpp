#include <stdio.h>
long long int t, s;
int d(long long int k) {
	if (k<1) return s;
	s+=k%10;
	d((long long int)k/10);
}
int main() {
	scanf("%lld", &t);
	printf("%lld", d(t));
}
