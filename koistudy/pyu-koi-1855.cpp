#include <stdio.h>

int n;

void f(int n) {
	n==0 ? printf("zero") : printf("non zero");
}

int main()
{
  scanf("%d", &n);
  f(n);
}
