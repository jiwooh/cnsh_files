#include <stdio.h>
int main() {
	int d[1001], n, c=0, j;
	scanf("%d", &n);
	for (int i=1;i<=n;i++) {
		scanf("%d", &d[i]);
	}
	for (int i=1;i<n;i++) {
		j=1;
		while (d[i]>d[j+i] && i+j<=n) {
			j++;
			c++;
		}
	}
	printf("%d", c);
}
