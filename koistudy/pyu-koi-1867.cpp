#include <stdio.h>

float x;

int f(float t) {
	return (int)t+0.5;
}

int main()
{
  scanf("%f", &x);
  printf("%d\n", f(x));
}
