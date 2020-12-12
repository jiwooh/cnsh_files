#include <stdio.h>
int main() {
	int n, m, j;
	scanf("%d %d", &m, &n);
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=m;j++) {
			if (i==1 || i==n) {
				if (j==1 || j==m) {
					printf("¦«");
				} else {
					printf("¦¡");
				}
			} else {
				if (j==1 || j==m) {
					printf("¦¢");
				} else {
					printf(" ");
				}
			}
			
		}
		printf("\n");
	}
} 
