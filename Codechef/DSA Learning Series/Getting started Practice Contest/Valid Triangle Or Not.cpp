#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin>>a>>b>>c;
    int check = 1;
    if(!(a+b > c))
        check = 0;
    if(!(a+c > b))
        check = 0;
    if(!(b+c > a))
        check = 0;
    if(check == 1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
