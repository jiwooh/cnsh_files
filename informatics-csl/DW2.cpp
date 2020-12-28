#include <stdio.h>
int f(int n, int m) {
  if (m == 1 || m == n) {
    return 1;
  }
  else if (m < 1 || n < m){
    return 0;
  }
  else {
    return f(n-1, m-1) + f(n-1, m);
  }
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", f(n,k));
    return 0;
}
