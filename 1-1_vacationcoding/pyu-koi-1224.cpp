#include <stdio.h>
int d[1001][1001];
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=m;j++) {
			scanf("%d", &d[i][j]);
		}
	}
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=m;j++) {
			if (d[i][j]==1) {
				for (int r=i-1;r>=1;r--) {
					if (d[r][j]==0) {
						break;
					}
					d[i][j]++;
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
