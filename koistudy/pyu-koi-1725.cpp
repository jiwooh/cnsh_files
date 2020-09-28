#include <stdio.h>
int d[101][101];
int main() {
	int m, n, cnt=1, a=0;
	scanf("%d %d", &n, &m);
	for (int z=2;z<=n+m;z++) {
		for (int i=n;i>=1;i--) {
			for (int j=1;j<=m;j++) {
				if (i+j==z) {
					d[i][z-i]=cnt++;
				}
			}
		}
	}
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=m;j++) {
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
}
