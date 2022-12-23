#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> v;
  for(int i=0;i<n;++i){
    int temp;
    cin>>temp;
    v.push_back(temp);
  }
  sort(v.begin(),v.end());
  int continuous=1,maxContinuous=1;
  for(int i=1;i<n;++i){
    if(v[i]==v[i-1]){
      continuous++;
      if(continuous>maxContinuous){
        maxContinuous=continuous;
      }
    }else {
      continuous=1;
    }
  }
  if(maxContinuous<=(n+1)/2){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
}