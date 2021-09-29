#include <iostream>
using namespace std;

int main() {
    int n;
    long sum = 0;
    cin>>n;
    for(int i=1; i<=n; i++)
        sum += (long)i;
    cout<<sum;
    return 0;
}
