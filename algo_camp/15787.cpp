#include <stdio.h>
int a[100001], c;
int main() {
	int n, m, f, w, x;
	scanf("%d %d", &n, &m);
	for (int i=1;i<=m;i++) {
		scanf("%d %d %d", &f, &w, &x);
		if (f==1) {
			a[w]+=pow(2,x);
		} else if (f==2) {
			a[w]-=pow(2,x);
		} else if (f==3) {
			a[w]>>1;
		} else if (f==4) {
			a[w]<<1;
		}
	}
	for (int i=1;i<=n;i++) {
		if (a[1]=a[i]) {
			c++;
		}
	}
	printf("%d", c);
}
