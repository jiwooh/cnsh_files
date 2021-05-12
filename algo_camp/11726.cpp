#include <stdio.h>
int main() {
    int a[1001], n;
    a[1]=1;
    a[2]=2;
    scanf("%d", &n);
    for (int i=3;i<=n;i++) {
        a[i]=a[i-1]+a[i-2];
    }
    printf("%d", a[n]%10007);
}
