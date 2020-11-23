#include <stdio.h>
int main() {
	int n, m, a[101][101];
	scanf("%d %d", &n, &m);
	for (int i=n;i>=1;i--) {
		for (int j=1;j<=m;j++) {
			a[i][j]=(i-1)*m+j;
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

