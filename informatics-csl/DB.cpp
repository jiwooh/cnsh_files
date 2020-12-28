#include <stdio.h>

long long int n;

int sqrt(long long int n) {
    long long int t=0;
    for (long long int i=0;i<=n; i++) {
        if (i * i > n) {
            break;
        }
        else {
            t = i;
        }
    }
    return t;
}

int main()
{
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
}

