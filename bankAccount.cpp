#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n;
  cin>>n;
  int count = 0;
  if(n>0 || n==0){
    cout<<n;

  }
  else if(n==-10){
    cout<<0;
  }
  else {
    
      long long temp1=n;
      long long temp2=temp1/10;
      int rem1=n%10;
      for(int i=0;i<2;++i){
        n=n/10;
      }
      long long ans=(n*10) + rem1;
      cout<<max(temp2,ans);
  }
}