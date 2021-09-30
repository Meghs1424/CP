#include <iostream>
using namespace std;

int main() {
    int t, n, num;
    cin>>t;
    for(int i=0; i<t; i++) {
        cin>>n;
        num = 0;
        while(n > 0) {
            num *= 10;
            num += n%10;
            n /= 10;
        }
        cout<<num<<'\n';
    }
    return 0;
}
