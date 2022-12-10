#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<long> v;
  long long sum1 = 0;
  long long Tsum = 0;
  int count = 0;
  for(int i = 0; i<n;++i){
    long t;
    cin>>t;
    v.push_back(t);
    Tsum = Tsum + t;
  }
  sort(v.begin(), v.end(), greater<int>());
  for(int i=0;i<n;++i){
    if(sum1>Tsum-sum1){
      break;
    }
    else{
      sum1=sum1+v[i];
      count++;
    }
  }
  cout<<count;

}