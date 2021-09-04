#include <iostream>
using namespace std;

void cal_ans(int a, int b, int c, int d, int e) {
    //checkin Limit = d
    // carry limit = e
    int check = 0;
    if(a+b <= d) {
        if(c <= e) {
            cout<<"YES\n";
            return;
        }
    } 
    if(b + c <= d) {
        if(a <= e){
            cout<<"YES\n";
            return;
        }
    }
    if(a+c <= d) {
        if(b <= e){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
    return;
}

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++) {
        int A, B, C, D, E;
        cin>>A>>B>>C>>D>>E;
        cal_ans(A,B,C,D,E);
    }
    return 0;
}
