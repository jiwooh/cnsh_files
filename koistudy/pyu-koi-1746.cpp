#include <stdio.h>
int max(int a, int b) {
	return a<b?b:a;
}
int main() {
	int n;
	scanf("%d", &n);
	int a[101], b[101];
	for (int i=1;i<=n;i++) {
		scanf("%d", &a[i]);
	}
	for (int i=1;i<=n/2;i++) {
		printf("%d ", max(a[2*i-1],a[2*i]));
	}
}
