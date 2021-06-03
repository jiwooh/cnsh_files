#include <stdio.h>
int main() {
	int t, n, z, a[101], b[101], c[101], d[101], e[101], f[101], r;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		r=n;
		scanf("%d %d %d %d %d %d", &a[1], &b[1], &c[1], &d[1], &e[1], &f[1]);
		for (z=1;n>=0;z++) {
			n=r;
			if (z!=1) {
				a[z]=a[z-1]+b[z-1]+f[z-1]+d[z-1];
				c[z]=c[z-1]+b[z-1]+f[z-1]+d[z-1];
				e[z]=e[z-1]+b[z-1]+f[z-1]+d[z-1];
				b[z]=b[z-1]+a[z-1]+c[z-1]+e[z-1];
				d[z]=d[z-1]+a[z-1]+c[z-1]+e[z-1];
				f[z]=f[z-1]+a[z-1]+c[z-1]+e[z-1];
			}
			n-=a[z]+b[z]+c[z]+d[z]+e[z]+f[z];
		}
		printf("%d\n", z-1);
	}
}
