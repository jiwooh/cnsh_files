#include <stdio.h>

int a, b;

int gcd(int w, int e) {
	int s = e>w?w:e ;
	for (int i=s;i>=1;i--) {
		if (w%i==0 && e%i==0) return i;
	}
}
int main()
{
  scanf("%d%d", &a, &b);
  printf("%d\n", gcd(a, b));
}
