#include <stdio.h>
#include <vector>
using namespace std;
vector<int> V[11];
int main() {
    int a;
    for (int i=1;i<=2;i++) {
        V[0].push_back(i);
        V[3].push_back(i+2);
    }
    V[0].push_back(5);
    V[3].pop_back();
}
