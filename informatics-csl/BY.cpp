#include <stdio.h>

int main(){
	int n, m, i, j, cnt=0, ar[100][100];
	scanf("%d %d", &n, &m);
	
	for(i=0;i<m+n;i++){
		for(j=0;j<=i;j++){
			if(j>=n||i-j>=m) continue;
			ar[j][i-j]=++cnt;
		}
	}
	
	for(i=n-1;i>=0;i--){
		for(j=0;j<m;j++){
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
