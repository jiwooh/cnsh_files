#include <stdio.h>
char d[1000][1000];
int main() {
	int n, m, r=0;
	scanf("%d %d", &n, &m);
	for (int i=0;i<n;i++) {
		scanf("%s", d[i]);
	}
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			if (d[i][j]=='1' && i!=0) {
				for (int r=i-1;r>=0;r--) {
					if (d[r][j]=='0') {
						break;
					}
					d[i][j]++;
				}	
			}
		}
	}
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			if (d[i][j]<58) {
				printf("%c ", d[i][j]);
			} else {
				while (d[i][j]>=58) {
					d[i][j]-=10;
					r++;
				}
				printf("%d%c ", r, d[i][j]);
				r=0;
			}
		}
		printf("\n");
	}
}
