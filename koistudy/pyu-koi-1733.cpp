#include <stdio.h>
int main() {
    int a[101][101]={}, rev=1, row=0, col=-1, lim=0, n, m;
    scanf("%d %d", &n, &m);
    for (int cnt=0;cnt<n*m;) {
        for (int i=0;i<m-lim;i++) {
            col+=rev;
            a[row][col]=++cnt;
        }
        for (int j=0;j<n-lim-1;j++) {
            row+=rev;
            a[row][col]=++cnt;
        }
        lim++;
        rev*=-1;
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
