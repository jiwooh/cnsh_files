#include <stdio.h>
#define MAX 1<<5
int n, d[MAX], k;

void s() {
	for (int i=1;i<=n;i++) {
		if (d[i]==k) {
			printf("key is at %d\n", i);
			return;
		}
	}
	printf("Not Found!\n");
}
int main() {
	scanf("%d", &n);
	for (int i=1;i<=n;i++) {
		scanf("%d ", &d[i]);
	}
	scanf("%d", &k);
	s();
}
