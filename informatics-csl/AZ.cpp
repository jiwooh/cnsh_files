#include <stdio.h>
int main() {
	int a, m, d, n;
	scanf("%d %d %d %d", &a, &m, &d, &n);
	long long int an=a;
	for (int i=2;i<=n;i++) {
		an=an*m+d;
	}
	printf("%lld", an);
}

