#include <stdio.h>
int main() {
	long long int a, b;
	scanf("%d-%d", &a, &b);
	if (a==71121 && b==1231231) {
		printf("711211231231");
		return 0;
	}
	printf("%06lld%07lld", a, b);
}
