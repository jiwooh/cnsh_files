#include <stdio.h>

int n, d[110];

int f() {
    int r=0;
    for(int i=0;i<n;i++) {
        if (d[i]>d[r]) {
            r=i;
        }
    }
    return r+1;
}

int main()
{
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &d[i]);

  printf("%d\n", f());
  return 0;
}
