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
  vector<vector<int>> v2;
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
  count2=0;
  for(int i=0;i<n;++i){
    if(v1[i]==3){
    v3.push_back(i+1);
    count2++;
    }
  }

  v2.push_back(v3);
  v3.clear();
  int outputCount=0;
  count1=min(count1,count2);
  if(count1==0 || count2==0){
    outputCount=1;
    cout<<0;
  }
  if(outputCount==0 || outputCount!=1){
  cout<<count1<<"\n";
  int temp=0;
  for(int i=0;i<count1;++i,temp++){
    if(temp==count1){
      cout<<temp;
      break;
    }
    for(int j=0;j<v2.size();++j){
      cout<<v2[j][i]<<" ";
    }
    cout<<"\n";
  }
} 
}