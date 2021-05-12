#include <stdio.h>
#include <stack>
using namespace std;
stack<int> S;
int main() {
    for (int i=1;i<=5;i++) {
        S.push(i);
    }
    S.pop();
    S.pop();
    S.pop();
    printf("%d", S.top());
}
