#include <stdio.h>
int main() {
    int a[91], b[91], n;
    a[1]=0;
    b[1]=1;
    scanf("%d", &n);
    for (int i=2;i<=n;i++) {
        a[i]=a[i-1]+b[i-1];
        b[i]=a[i-1];
    }
    printf("%d", a[n]+b[n]);
}
