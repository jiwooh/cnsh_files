#include <stdio.h>
int n, H[1<<10], s;
void up(int k) {
    int t;
    if (k==1) {
        return;        // 하향식이다  ←──────────┐ 
    }                  //                                   │
    if (H[k/2]<H[k]) { // (부모노드가 자식노드보다 작다면)  │
        t=H[k/2];      // 값교환작업                        │
        H[k/2]=H[k];   // 값교환작업                        │
        H[k]=t;        // 값교환작업                        │
        up(k/2);       // 재귀함수이다  ──────────┘ 
    }
}
void push(int x) {
    H[++s]=x; // s 초기값이 0, 1부터 시작하기 위해 ++s 연산 수행 
    up(s);
}

int main() {
    int t;
    scanf("%d", &n);
    for (int i=1;i<=n;i++) { // root 노드가 1번 방에 들어간다 
        scanf("%d", &t);
        push(t);
    }
    for (int k=1;k<=n;k*=2) {             // 완전 
        for(int i=k;k<=n&&i<=2*k-1;i++) { // 2진 
            printf("%d ", H[i]);          // 트리 
        }                                 // 저장 
        printf("\n");                     // 코드 
    }
}
