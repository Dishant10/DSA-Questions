#include<bits/stdc++.h>
using namespace std;
int main(){
  long long k,d;
  cin>>k>>d;
  if(d==0){
    if(k>1){
      cout<<"No solution";
    }
    else {
      cout<<0;
    }
    
  }
  else{
    cout<<d;
    for(int i=0;i<k-1;++i){
      cout<<0;
    }
  }
}