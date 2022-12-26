#include<bits/stdc++.h>
using namespace std;
int main(){
  int y,n,k;
  cin>>y>>k>>n;
  if(y==n || y>n){
    cout<<-1;
  }
  else{
    vector<int> v;
    int x=1,count=0,temp=1;
    while(y+x<=n){
      temp=y+x;
      if(temp%k==0){
        v.push_back(x);
        count++;
      }
      else{
        temp=y;
      }
      ++x;
    }
    if(count==0){
      cout<<-1;
    }
    else{
      //sort(v.begin(),v.end());
      for(auto ele:v){
        cout<<ele<<" ";
      }
    }
  
  }
}