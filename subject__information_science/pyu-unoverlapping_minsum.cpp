#include <stdio.h>
int n, d[11][11], s[11], minsum=1<<10;
void f(int t, int sum) {
	if (t>n) {
		if (minsum>=sum) {
			minsum=sum;
		}
		return;
	}
	for (int j=1;j<=n;j++) {
		if (!s[j]) {
			s[j]=1;
			f(t+1, sum+d[t][j]);
			s[j]=0;
		}
	}
}
int main() {
	scanf("%d", &n);
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			scanf("%d", &d[i][j]);
		}
	}
	f(1,0);
	printf("%d", minsum);
}
