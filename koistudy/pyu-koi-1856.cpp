#include <stdio.h>

int n;

void f(int n) {
	n==0 ? printf("zero") : ( n>0 ? printf("positive") : printf("negative") );
}

int main()
{
  scanf("%d", &n);
  f(n);
}
