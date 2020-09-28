#include <stdio.h>

int n;

int f(int k) {
	int c=0;
	for (int i=1;i<=k;i++) {
		if (k%i==0) c++;
	}
	return c;
}

int main()
{
  scanf("%d", &n);
  printf("%d\n", f(n));
}
