#include <iostream>
using namespace std;

void cal_ans(int n, int arr[]) {
    int even_even = 0, odd_odd = 0, even_odd = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2 == 0) {
            if((i+1)%2 == 0)
                even_even ++;
            else
                even_odd ++;
        }
        else {
            if((i+1)%2 == 0)
                even_odd ++;
            else
                odd_odd ++;
        }
    }
    //cout<<even_even<<' '<<odd_odd<<' '<<even_odd<<'\n';
    int sum = even_odd;
    if(even_even < odd_odd)
        sum += even_even*2;
    else
        sum += odd_odd*2;
    cout<<sum<<'\n';
}

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++) {
        int N;
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cal_ans(N,arr);
    }
    return 0;
}
