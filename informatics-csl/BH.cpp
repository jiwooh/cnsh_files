#include <stdio.h>
int main() {
	int n, a[101][101];
	scanf("%d", &n);
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			a[i][j]=(i-1)*n+j;
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

