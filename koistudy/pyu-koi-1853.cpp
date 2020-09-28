#include <stdio.h>

int n;

void f(int k) {
	k%2 ? printf("odd") : printf("even");
}

int main()
{
  scanf("%d", &n);
  f(n);
}
