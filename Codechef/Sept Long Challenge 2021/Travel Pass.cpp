#include <iostream>
#include <string.h>
using namespace std;

void cal_ans(int n, int a, int b, string s) {
    int time = 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '0')
            time += a;
        else if(s[i] == '1')
            time += b;
    }
    cout<<time<<'\n';
}

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++) {
        int N, A, B;
        string S;
        cin>>N>>A>>B;
        cin>>S;
        cal_ans(N,A,B,S);
    }
    return 0;
}
