#include <stdio.h>
#include <vector>
using namespace std;
vector<pair<int, int> > V;
int main() {
    int a, b;
    for (int i=1;i<=3;i++) {
        scanf("%d %d", &a, &b);
        V.push_back({a,b});
    }
    V.pop_back();
    printf("%d", V[1].first);
}
