#include <stdio.h>
int f(int k) {
	if (k==1) return 1;
	else if (k==2) return 2;
	else return f(k-1)+f(k-2);
} 
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", f(n));
}
