#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> v1;
  for(int i=0;i<n;++i){
    int temp;
    cin>>temp;
    v1.push_back(temp);
  }
  vector<vector<int>> v2(3);
  vector<int>v3;
  int count1=0;
  int count2=0;
  for(int i=0;i<n;++i){
    if(v1[i]==1){
    v3.push_back(i+1);
    count1++;
    }
  }
  v2.push_back(v3);
  v3.clear();
  for(int i=0;i<n;++i){
    if(v1[i]==2){
    v3.push_back(i+1);
    count2++;
    }
  }
  v2.push_back(v3);
  v3.clear();
  count1=min(count1,count2);
  for(int i=0;i<n;++i){
    if(v1[i]==3){
    v3.push_back(i+1);
    count2++;
    }
  }

  v2.push_back(v3);
  v3.clear();
  count1=min(count1,count2);
  cout<<count1;
  int temp=0;
  for(int i=0;i<v2.size();++i,++temp){
      cout<<v2[i][0]<<" ";
      //cout<<"\n";
      if(temp==count1){
      break;
  }
  }
  
}