#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    long even = 0, odd = 0; 
    cin>>n;
    while(n > 0) {
        odd += (long)i;
        i++;
        even += (long)i;
        i++;
        n--;
    }
    cout<<odd<<' '<<even;
    return 0;
}
