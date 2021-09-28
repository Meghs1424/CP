#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, i = 1, count = 0;
    vector<int> fact;
    cin>>n;
    while(i<=n) {
        if(n%i == 0){
            count++;
            fact.push_back(i);
        }
        i++;
    }
    cout<<count<<'\n';
    for(int j=0; j<fact.size(); j++) {
        cout<<fact[j]<<' ';
    }
    return 0;
}
