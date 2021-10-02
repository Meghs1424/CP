#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

void get_ans() {
    string s;
    vector<int> left(26, 0);
    vector<int> right(26, 0);
    cin>>s;
    int len = s.length()/2;
    
    for(int i=0; i<len; i++) {
        left[(int(s[i])) - 97]++;
    }
    if(s.length()%2==0) {
        for(int i=s.length()-1; i>=len; i--) {
            right[(int(s[i])) - 97]++;
        }
    }
    else {
        for(int i=s.length()-1; i>len; i--) {
            right[(int(s[i])) - 97]++;
        }
    }
 
    int check = 1;
    for(int i=0; i<left.size(); i++) {
        if(left[i] != right[i]) {
            check = 0;
            break;
        }
    }

    if(check == 1)
        cout<<"YES\n";
    else 
        cout<<"NO\n";
}   

int main() {
    int t, n, num;
    cin>>t;
    for(int i=0; i<t; i++) {
        get_ans();
    }
    return 0;
}
