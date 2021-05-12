#include <stdio.h>
int max(int a, int b) {
    return a>b?a:b;
}
int w[101], v[101], dp[100001];
int main() {
    int n, k, a, b;
    scanf("%d %d", &n, &k);
    for (int i=1;i<=n;i++) {
        scanf("%d %d", &a, &b);
        w[i]=a;
        v[i]=b;
    }
    for (int i=1;i<=n;i++) {
        for (int j=k;j>=1;j--) {
            if (j>=w[i]) dp[j]=max(dp[j], dp[j-w[i]]+v[i]);
        }
    }
    printf("%d", dp[k]);
}
