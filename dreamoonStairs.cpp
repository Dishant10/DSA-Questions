#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  if(n<m){
      cout<<-1;
    }
  else{
    if(n==1){
    cout<<1;
  }
    else{
      int sumCount=0,count=0;
      while(sumCount+2<=n){
        sumCount=sumCount+2;
        count++;
      }
      if(sumCount==count && count%m==0){
        cout<<count;
      }
      else if(sumCount<n){
        while(sumCount!=n){
          sumCount=sumCount+1;
          count++;
        }
        if(count%m==0){
          cout<<count;
        }
      else{
        while(sumCount!=n || count%m!=0){
          sumCount=sumCount-2;
          count=count-1;
          sumCount=sumCount+1*2;
          count=count+1*2;
        }
        cout<<count;
      }
    }
    else{
      while(sumCount!=n || count%m!=0){
          sumCount=sumCount-2;
          count=count-1;
          sumCount=sumCount+1*2;
          count=count+1*2;
        }
        cout<<count;
    }
  }
}
}