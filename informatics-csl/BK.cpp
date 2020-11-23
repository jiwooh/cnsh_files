#include <stdio.h>
int main() {
	int n, m, a[101][101];
	scanf("%d %d", &n, &m);
	for (int j=1;j<=n;j++) {
		for (int i=m;i>=1;i--) {
			a[i][j]=(i-1)*n+j;
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

