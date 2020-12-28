#include <stdio.h>
int c[11];
int main() {
	int a[999], i=1;
	a[0]=3;
	while (1<=a[i-1] && a[i-1]<=10) {
		scanf("%d", &a[i++]);
	}
	for (int j=1;j<=10;j++) {
		c[a[j]]++;
	}
	for (int j=1;j<=10;j++) {
		if (c[j]) printf("%d : %d°³\n", j, c[j]);
	}
}
