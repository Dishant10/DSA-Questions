#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> v;
  unordered_map<int,int> m;
  for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    m[temp] = i+1;
  }
  for(int i=0;i<n;++i){
    v.push_back(m[i+1]);
  }
  for(auto ele:v){
    cout<<ele<<" ";
  }
}