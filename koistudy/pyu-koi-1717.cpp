#include <stdio.h>
int main() {
	int d[101][101];
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			if (i%2) {
				d[i][j]=(i-1)*n+j;
			} else {
				d[i][j]=i*n-j+1;
			}
			
		}
	}
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
}
