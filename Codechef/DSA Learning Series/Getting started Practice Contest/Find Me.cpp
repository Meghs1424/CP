#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int check = -1;
    for(int i=0; i<n; i++) {
        if(arr[i] == k)
            check = 1;
    }
    cout<<check;
    return 0;
}
