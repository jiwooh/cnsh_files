#include <stdio.h>
int n, i;
void g(int k, int l) {
	if (k>l) return;
	printf("%d ", k);
	g(k+1, l);
}
void f(int k) {
	if (k>n) return;
	g(1, k);
	printf("\n");
	f(k+1);
}
int main() {
	scanf("%d", &n);
	f(1);
}
