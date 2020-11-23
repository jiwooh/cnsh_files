#include <stdio.h>
int main() {
	long long a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld\n%0.1lf", a+b+c, (double)(a+b+c)/3);
}
