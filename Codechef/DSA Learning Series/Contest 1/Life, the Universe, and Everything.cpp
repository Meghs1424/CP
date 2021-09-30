#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<int> v;
  while(n!=42)
  {
    v.push_back(n);
    cin>>n;
  }
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<endl;
  }
}
