#include <stdio.h>
int d[101][101];
int main() {
	int m, n, cnt, i=1, j=1, x=1, y=1;
	scanf("%d %d", &n, &m);
	cnt=n*m;
	for (int z=1;z<=n*m;z++) {
		d[i][j]=cnt--;
		if (j<=m && x==1 && y==1) {
			if (j+1<=m && d[i][j+1]==0) {
				j++;
			} else {
				i++;
				x=-1;
			}
		}
		else if (i<=n && x==-1 && y==1) {
			if (i+1<=n && d[i+1][j]==0) {
				i++;
			} else {
				j--;
				y=-1;
			}
		}
		else if (j>=1 && x==-1 && y==-1) {
			if (j-1>0 && d[i][j-1]==0) {
				j--;
			} else {
				i--;
				x=1;
			}
		}
		else if (i>=1 && x==1 && y==-1) {
			if (i-1>0 && d[i-1][j]==0) {
				i--;
			} else {
				j++;
				y=1;
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
