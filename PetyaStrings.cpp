#include<bits/stdc++.h>
using namespace std;
int main(){
  string first;
  string second;
  cin>>first;
  cin>>second;
  int flag = 0;
  for(int i=0;i<first.size();++i){
    first[i] = tolower(first[i]);
    second[i] = tolower(second[i]);
  }
  for(int i=0;i<first.size();++i){
    if(first[i]!=second[i]){
      if(first[i]-'a'>second[i]-'a'){
        cout<<"1";
        flag = 1;
        break;
      }
      else if(first[i]-'a'<second[i]-'a'){
          cout<<"-1";
          flag = 1;
          break;
      }
    }
    
  }
  if(flag == 0){
    cout<<"0";
  }
}