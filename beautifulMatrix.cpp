#include<bits/stdc++.h>
using namespace std;

int main(){
  pair<int,int> p;
  int count=0;
  for(int i=0;i<5;++i){
    for(int j=0;j<5;++j){
      int temp;
      cin>>temp;
      if(temp==1){
          p.first = i;
          p.second = j;
      }
    }
  }
  //cout<<p.first<<" "<<p.second<<endl;
  if(p.first==2 && p.second==2){
    cout<<"0";
    count = 10000;
  }
  else{
    while(p.second!=2 || p.first!=2){
     // cout<<"yes1";
      if(p.first>2){
        p.first=p.first-1;
        count++;
      }
      else if(p.first<2){
        p.first=p.first+1;
        count++;
      }
      if(p.second>2){
        p.second=p.second-1;
        count++;
      }
      else if(p.second<2){
        p.second=p.second+1;
        count++;
      }
    }
  }
  if(count!=10000){
    cout<<count<<endl;
  }
  
 // cout<<p.first<<" "<<p.second;
}