#include <stdio.h>
#include <stack>
using namespace std;
stack<int> S;
int a[1000][1000];
int main() {
    int n, tmp=0;
    scanf("%d", &n);
    for (int i=1;i<=n;i++) {
        scanf("%s", a[i]);
    }
    for (int i=1;i<=n;i++) {
        for (int j=1;a[i][j]!=0;j++) {
            S.push(a[i][j]);
            if (tmp=='(' && a[i][j]==')') {
                S.pop();
                S.pop();
                tmp=S.top();
            } else {
                tmp=a[i][j];
            }
        }
        if (S.size()) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
}
