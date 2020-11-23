#include <stdio.h>
int i, j, k;
int main() {
    int n, cnt;
    scanf("%d", &n);
    
    for (i=1;i<=n;i++) {
        for (j=i;j<=n;j++) {
            k=n-i-j;
            if (j>k) break;
			if (i+j>k && j+k>i && k+i>j) {
				printf("%d %d %d\n", i, j, k);
				cnt++;
			}
        }
    }
    printf("%d", cnt);
}
