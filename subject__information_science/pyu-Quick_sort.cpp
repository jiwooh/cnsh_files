#include <stdio.h>
#define MAX 1<<5
int n, d[MAX];
void Qsort(int L, int R) {
    if (L>=R) {
        return;
    }
    int pv=d[L], p=L+1, q=R, t;
    while (true) {
        while (d[p]<=pv && p<R) {
            p++;
        }
        while (d[q]>pv && q>L) {
            q--;
        }
        if (p<q) { // swap
            t=d[p]; d[p]=d[q]; d[q]=t;
        } else { // pivot swap
            t=d[L]; d[L]=d[q]; d[q]=t;
            break;
        }
    }
    Qsort(L, q-1);
    Qsort(q+1, R);
}
int main() {
    scanf("%d", &n);
    for (int i=1;i<=n;i++) {
        scanf("%d", &d[i]);
    }
    Qsort(1, n);
    for (int i=1;i<=n;i++) {
        printf("%d ", d[i]);
    }
}
