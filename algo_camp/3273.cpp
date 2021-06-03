#include <stdio.h>
#include <algorithm>
int main() {
	int a[100001], n, x, c=0;
	scanf("%d", &n);
	for (int i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &x);
	int p=0, q=n-1;
	std::sort(a,a+n);
	while (p<q) {
		if (a[p]+a[q]==x) {
			c++;
			p++; q--;
		} else if (a[p]+a[q]<x) {
			p++;
		} else if (a[p]+a[q]>x) {
			q--;
		}
	}
	printf("%d", c);
}
