#include <stdio.h>
int d[110], c[30], r[30], a[110];
int main() {
	int t, n, k, s;
	scanf("%d %d", &n, &k);
	for (int i=1;i<=n;i++) {
		scanf(" %c", &t);
		d[i]=t;
		c[t]++;
	}
	for (int i=1;i<=n;i++) {
		printf("i%d %c %d\n", i, d[i], c[d[i]]);
	}
	int w=1;
	for (int i='a';i<='z';i++) {
		if (c[i]!=0) {
			r[w++]=i;
		}
	}
	w--;
	for (int i=1;i<=w;i++) { //
		a[i]
	}
}
