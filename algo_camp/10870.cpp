#include <stdio.h>
int a[21];
int main() {
    int n;
    scanf("%d", &n);
    a[2]=1;
    for (int i=3;i<=n+1;i++) {
        a[i]=a[i-1]+a[i-2];
    }
    printf("%d", a[n+1]);
}
