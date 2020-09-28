#include <stdio.h>

int n;
int k=1;

void f()
{
  printf("*");
  if(k++>=n) return;
  f();
}

int main()
{
  scanf("%d", &n);
  f();
  printf("\n");
}
