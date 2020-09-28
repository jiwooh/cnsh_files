#include <stdio.h>
int main() {
    int n, m, cnt=1, d[101][101];
    scanf("%d %d", &n, &m);
    for (int z=2;z<=n+m;z++) {
        for (int i=1;i<=n;i++) {
            for (int j=1;j<=m;j++) {
                if (i+j==z) {
                    d[i][z-i]=cnt++;
                }
            }
        }
    }
    for (int i=n;i>=1;i--) {
        for (int j=m;j>=1;j--) {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }
}
