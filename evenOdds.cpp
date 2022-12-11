#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n;
  cin>>n;
  long long k;
  cin>>k;
  if(k<=(n+1)/2){
    cout<<k*2-1;
  }
  else
    cout<<(k-(n+1)/2)*2;

}