#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%lld\n%d\n%lld\n%lld\n%lld\n%.2lf", (long long int)a+b, a-b, (long long int)a*b, (long long int)a/b, (long long int)a%b, (double)a/b);
}
