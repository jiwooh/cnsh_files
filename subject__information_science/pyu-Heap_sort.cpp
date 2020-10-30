#include <stdio.h>
#define MAX 1<<5
int n, d[MAX];

void sftd(int k, int m) {
    if (k>m/2) {
        return;
    }
    int i=2*k;
    if (i<m && d[i+1]>d[i]) { //select bigger child node
        i++;
    }
    if (d[i]>d[k]) { //if child bigger than parent
        int t=d[k];
        d[k]=d[i];
        d[i]=t;
        sftd(i, m); //recursive shiftdown
    }
}
void Hify(int k) { //make heap by shiftdown
    for (int i=k/2;i>=1;i--) { //for all parent nodes
        sftd(i, k);
    }
}
void Hsort(int k) {
    Hify(k); //make heap [1, k]
    for (int i=k;i>=1;i--) {
        int t=d[1]; //swap max to last
        d[1]=d[i]; //last to root
        d[i]=t;
        sftd(1, i-1); //root shiftdown
    }
}
int main() {
    scanf("%d", &n);
    for (int i=1;i<=n;i++) {
        scanf("%d", &d[i]);
    }
    Hsort(n);
    for (int i=1;i<=n;i++) {
        printf("%d ", d[i]);
    }
}
