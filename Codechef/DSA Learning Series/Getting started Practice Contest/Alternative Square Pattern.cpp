#include <iostream>
using namespace std;

int main() {
    int n, check = 1, i=1;
    cin>>n;
    while(n > 0) {
        if(check == 1) {
            for(int j=0; j<5; j++) {
                cout<<i<<' ';
                i++;
            }
            check = 0;
            i += 4;
        }
        else {
            for(int j=5; j>0; j--) {
                cout<<i<<' ';
                i--;
            }
            check = 1;
            i += 6;
        }
        cout<<'\n';
        n--;
    }
    return 0;
}
