#include <stdio.h>
int abs(int x) {
	return x>0?x:-x;
}
int main() {
	int a[100001], n, re=999999999, rep, req;
	scanf("%d", &n);
	for (int i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
	if (a[0]>=0) {
		printf("%d %d", a[0], a[1]);
		return 0;
	}
	if (a[n-1]<=0) {
		printf("%d %d", a[n-2], a[n-1]);
		return 0;
	}
	int p=0, q=n-1;
	while (p<q) {
		int t=abs(a[p]+a[q]);
		if (t<=re) {
			rep=p; req=q; t=re;
		}
		if (t==0) break;
		if (t>0) q--;
		else p++;
	}
	printf("%d %d", a[rep], a[req]);
}
