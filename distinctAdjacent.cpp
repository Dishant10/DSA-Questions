#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> v;
  unordered_map<int,int> m;
  set<int> s;
  int count=0;
  for(int i=0;i<n;++i){
    int temp;
    cin>>temp;
    m[temp]++;
    s.insert(temp);
    v.push_back(temp);
  }
  if(n==1){
    cout<<"YES1";
    return 0;
  }
  else{
    for(int i=0;i<n;++i){
      if(m[v[i]]>(n/2)+2){
        cout<<"NO1";
        return 0;
        break;
      }
      else if(m[v[i]]==1){
        count++;
      }
    }
    if(count==n){
      cout<<"YES2";
      return 0;
    }
    for(auto ele:s){
      cout<<ele<<" "<<m[ele]<<" ";
    }
    cout<<"\n";
    cout<<"\n";
    for(auto ele:s){
      if(m[ele]>=2 ){
        int spaces=m[ele];
        if(count!=0){
          count=count-(spaces-1);
        }
        else if(count==0){
          cout<<"NO2";
          return 0;
          break;
        }
      }
    }
    cout<<"YES3";
  }
}