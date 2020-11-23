#include <stdio.h>
int a[25]={};
int main() {
	int n, m=0;
	a[m]=999;
	scanf("%d", &n);
	for (int i=1;i<=n;i++) {
		scanf("%d", a[i]);
		if (a[i]<a[m]) {
			m=i;
		}
	}
	printf("%d", a[m]);
}
