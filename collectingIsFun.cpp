#include<bits/stdc++.h>
using namespace std;
int main(){
  int k;
  cin>>k;
  vector<int> v;
  set<int> s;
  k=k*2;
  unordered_map<int,int> m;
  for(int i=0;i<4;i++){
    for(int j=0;j<4;++j){
      char temp;
      cin>>temp;
      if(temp!='.'){
        int temp2=int(temp);
        v.push_back(temp2);
      }
    }
  }
  int flag=0;
  sort(v.begin(),v.end());
  for(auto ele:v){
    m[ele]++;
    s.insert(ele);
  }
  for(auto ele:s){
    if(k<m[ele]){
      cout<<"NO";
      flag=1;
      return 0;
    }
    else{
      continue;
    }
  }
  if(flag==0){
    cout<<"YES";
  }
}