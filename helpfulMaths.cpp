#include<bits/stdc++.h>
using namespace std;
int main(){
  string input;
  cin>>input;
  vector<char> n;
  
  for(int i=0;i<input.size();i++){
    if(input[i]!='+'){
      n.push_back(input[i]);
    }
  }
  sort(n.begin(), n.end());
  cout<<n[0];
  for(int i = 1;i<n.size();++i){
    cout<<"+"<<n[i];
  }
  //cout<<to_string(3);
}