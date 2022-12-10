#include<bits/stdc++.h>
using namespace std;
int main(){
  string input;
  cin>>input;
  string check = "hello";
  int a = 0, b = 0, c = 0, d = 0, e = 0,pos;
  for(int i=0;i<input.size();++i){
    if(input[i]=='h'){
      pos = i;
      a=1;
      break;
    }
  }
  for(int i=pos+1;i<input.size();++i){
    if(input[i]=='e'){
      pos = i;
      b = 1;
      break;
    }
  }
  for(int i=pos+1;i<input.size();++i){
    if(input[i]=='l'){
      pos = i;
      c = 1;
      break;
    }
  }
  for(int i=pos+1;i<input.size();++i){
    if(input[i]=='l'){
      pos = i;
      d = 1;
      break;
    }
  }
  for(int i=pos+1;i<input.size();++i){
    if(input[i]=='o'){
      pos = i;
      e = 1;
      break;
    }
  }
  if(a+b+c+d+e==5){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }

}