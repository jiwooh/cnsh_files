#include <stdio.h>
int a=1, b=1, N;
int f(int n, int m) {
  if (m == 1 || m == n) {
    return 1;
  }
  else if (m < 1 || n < m){
    return 0;
  }
  else {
    return f(n-1, m-1) + f(n-1, m);
  }
}
void g() {
	printf("%d ", f(a, b));
	if (N==a && N==b) return;
	if (b>=a) {
		printf("\n");
		a++;
		b=1;
	} else {
		b++;
	}
	g();
}
int main() {
    scanf("%d", &N);
    g();
    return 0;
}
