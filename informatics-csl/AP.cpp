#include <stdio.h>
int main() {
	int a=0, s=0, n;
	scanf("%d", &n);
	while (s<n) {
		s+=a++;
	}
	printf("%d", a-1);
}
