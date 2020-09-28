#include <stdio.h>
int b(int p, int q) {
	return p>q?p:q;
}
int s(int p, int q) {
	return p<q?p:q;
} 
int main() {
	int n1, n2, n3, tmp, tmp_b, m;
	scanf("%d %d %d", &n1, &n2, &n3);
	if (n1==n2 || n2==n3 || n3==n1) {
		printf("Impossible");
		return 0;
	}
	tmp_b = b(b(n1, n2), n3); 
	printf("%d %d %d", s(s(n1, n2), n3), s(b(n1,n2),b(n2,n3))!=tmp_b ? s(b(n1,n2),b(n2,n3)) : b(s(n1,n2),s(n2,n3)), tmp_b);
}
