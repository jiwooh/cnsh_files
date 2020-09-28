#include <stdio.h>
char t[1000][1000];
int d[1000][1000];
int main() {
	int n, m, r=0;
	scanf("%d %d", &n, &m);
	for (int i=0;i<n;i++) {
		scanf("%s", t[i]);
	}
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			d[i][j]=t[i][j]-48;
			if (d[i][j]==1 && i!=0) {
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
