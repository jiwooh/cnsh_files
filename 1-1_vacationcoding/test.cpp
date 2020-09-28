#include <stdio.h>
#include <stdlib.h>
int d[51][51];
char g[51][51];
int dgt(int n, int k) {
	int a=1;
	for (int i=1;i<k;i++) {
		a*=10;
	}
	return (n%(10*a)-n%a)/a;
}
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i=0;i<n;i++) {
		scanf("%s", g[i]);
		for (int j=0;j<m;j++) {
			d[i][j]=dgt(atoi(g[i]),m-j);
		}
	}
	for (int i=0;i<n;i++) {
		printf("test: %s %d %d\n", g[i], atoi(g[i]), d[i]);
	}
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			if (d[i][j]==1) {
				for (int r=i-1;r>=0;r--) {
					if (d[r][j]==0) {
						break;
					}
					d[i][j]++;
				}	
			}
		}
	}
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
}
