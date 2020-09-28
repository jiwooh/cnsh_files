#include <stdio.h>
int d[11][11], a[11][11];
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=m;j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=m;j++) {
			d[i][j]=a[i][j]+d[i-1][j]+d[i][j-1]-d[i-1][j-1];
		}
	}
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=m;j++) {
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}	
}
