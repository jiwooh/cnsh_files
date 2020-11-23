#include <stdio.h>
int main() {
	int n, x, y, a[20][20]={};
	for (int i=1;i<=19;i++) {
		for (int j=1;j<=19;j++) {
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d", &n);
	for (int i=1;i<=n;i++) {
		scanf("%d %d", &x, &y);
		for (int j=1;j<=19;j++) {
			a[x][j]=!a[x][j];
		}
		for (int j=1;j<=19;j++) {
			a[j][y]=!a[j][y];
		}
	}
	for (int i=1;i<=19;i++) {
		for (int j=1;j<=19;j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

