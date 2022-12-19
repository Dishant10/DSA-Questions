#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  vector<vector<char>> v;
  int count=0;
  vector<char> temp;
  for(int i=0;i<n;++i){
    temp.clear();
    for(int j=0;j<m;++j){
      if(i%2==0 || i==0){
        temp.push_back('#');
      }
      else{
        if(i==1){
          count=m-1;
        }
        temp.push_back('.');
        
      }
    }
    if(i%2!=0){
      temp[count]='#';
      if(count==0){
        count=m-1;
      }
      else{
        count=0;
      }
    }
    v.push_back(temp);
  }
  for(int i=0;i<n;++i){
    for(int j=0;j<m;++j){
      cout<<v[i][j];
    }
    cout<<"\n";
  }
}