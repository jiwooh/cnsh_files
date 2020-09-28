#include <stdio.h>

int n;

bool zero(int n) {
	return n==0?1:0;
}

int main()
{
  scanf("%d", &n);
  if(zero(n)) printf("zero\n");
  else printf("non zero\n");
}
