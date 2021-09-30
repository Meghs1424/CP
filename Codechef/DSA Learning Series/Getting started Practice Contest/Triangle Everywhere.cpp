#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int res = -1;
    if(a+b>c && b+c>a && a+c>b) {
        if(a==b && b==c)
            res = 1;
        else if (a==b || b==c || a==c)
            res = 2;
        else
            res = 3;
    }
    cout<<res;
    return 0;
}
