#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> V;
int main() {
    int t, n;
    scanf("%d", &n);
    for (int i=1;i<=n;i++) {
        scanf("%d", &t);
        V.push_back(t);
    }
    sort(V.begin(), V.end());
    for (int i=0;i<n;i++) {
        printf("%d\n", V[i]);
    }
}
