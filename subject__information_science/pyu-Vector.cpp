#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int>V;
    cout<<"[V[i], V.size(), V.capacity()]" <<endl;
    for (int i=0;i<=10;i++) {
        V.push_back(i+1);
        cout<<"["<<V[i]<<","<<V.size()<<","<<V.capacity()<<"]"<<endl;
    }
    return 0;
}
