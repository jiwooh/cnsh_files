#include <stdio.h>
#include <stdlib.h>
int d[1000][1000];
char g[1000][1500];
int dgt(int q, int k) { //returns q's kth digit from right 
	long long int a=1;
	for (int i=1;i<k;i++) {
		a*=10;
	}
	return (q%(10*a)-q%a)/a;
}
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i=0;i<n;i++) {
		scanf("%s", g[i]); //scan by line : ex) 01001
		for (int j=0;j<m;j++) {
			d[i][j]=dgt(atoi(g[i]),m-j); //atoi(g[i]) : (int)01001 //m-j : digit number from right
		}
	}
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			if (d[i][j]==1 && i!=0) { //i!=0 is to avoid r=-1 //idk i!=0 is needed or not
				for (int r=i-1;r>=0;r--) { //go up starting from one line above
					if (d[r][j]==0) { //break when 0 appears
						break;
					}
					d[i][j]++; //increase value when d[r][j]!=0
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
