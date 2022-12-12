#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,a,b;
  cin>>n>>m>>a>>b;
  int count=0;
  if(n==1){
    //cout<<"yes";
    int ans1=n*a;
    int ans2=n*b;
    int finalAnswer = min(ans1,ans2);
    cout<<finalAnswer;
  }
  else{
    int sum = 0;
    if(n%m==0){
      sum=min((n/m)*b,n*a);
    }
    else {
      sum=min(n*a,((n/m)+1)*b);
    }
    sum=min(sum,(n/m)*b + (n%m)*a);
    cout<<sum;
  }
}