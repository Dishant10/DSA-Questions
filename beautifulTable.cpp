#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  if(n==1){
    cout<<k;
  }
  else if(n==2){
    cout<<k<<" "<<0<<"\n";
    cout<<0<<" "<<k;
  }
  else{
    for(int i=0;i<n;++i){
      for(int j=0;j<n;++j){
        if(i==j){
          cout<<k<<" ";
        }
        else{
          cout<<0<<" ";
        }
      }
      cout<<"\n";
    }
  }
}