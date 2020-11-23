#include <stdio.h>
int d[26][26]={0,1}, n, m;
int main() {
	scanf("%d %d", &n, &m);
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=i;j++) {
			d[i][j]=d[i-1][j]+d[i-1][j-1];
		}
	}
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=i;j++) {
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
}
