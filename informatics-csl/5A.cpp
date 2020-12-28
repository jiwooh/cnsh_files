#include <stdio.h>
int main() {
	int d[6][6], max=0, s=0;
	for (int i=1;i<=5;i++) {
		for (int j=1;j<=5;j++) {
			scanf("%d", &d[i][j]);
		}
	}
	for (int i=2;i<=4;i++) {
		for (int j=2;j<=4;j++) {
			s=d[i-1][j-1]+d[i-1][j]+d[i-1][j+1] + d[i][j-1]+d[i][j]+d[i][j+1] + d[i+1][j-1]+d[i+1][j]+d[i+1][j+1];
			if (max<s) max=s;
		}
	}
	printf("%d", max);
}
