#include <stdio.h>
int main() {
	int n, i, j, a[11][11]={};
	for (i=1;i<=10;i++) {
		for (j=1;j<=10;j++) {
			scanf("%d", &a[i][j]);
		}
	}
	i=2, j=2;
	while (a[i][j]!=2) {
		a[i][j]=9;
		if (a[i][j+1]==0||a[i][j+1]==2) {
			j++;
		} else if (a[i+1][j]==0||a[i+1][j]==2){
			i++;
		} else {
			break;
		}
	}
	a[i][j]=9;
	for (int i=1;i<=10;i++) {
		for (int j=1;j<=10;j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
