#include <stdio.h>
int n, i;
void g(int k) {
	if (k<1) return;
	printf("*", k);
	g(k-1);
}
void f(int k) {
	if (k<1) return;
	f(k-1);
	g(k);
	printf("\n");
}
int main() {
	int n;
	scanf("%d", &n);
	f(n);
}
