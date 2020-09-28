#include <stdio.h>

int n;

void f(int n) {
	n==0 ? printf("false") : printf("true");
}

int main()
{
  scanf("%d", &n);
  f(n);
}
