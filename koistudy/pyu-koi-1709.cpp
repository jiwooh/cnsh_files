#include <stdio.h>
int main() {
	int d[101][101];
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			d[i][j]=(i-1)*n+j;
		}
	}
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
} 
