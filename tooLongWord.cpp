#include<bits/stdc++.h>
using namespace std;
int main(){
  int k;
  cin>>k;
  while(k>0){

    string inputString;
    cin>>inputString;
    string outputString;
    if(inputString.size()>10){
      int noOfChar = inputString.size() - 2;
      outputString = inputString[0] + to_string(noOfChar) + inputString[inputString.size()-1];
      cout<<outputString<<"\n";
    }
    else{
      cout<<inputString<<"\n";
    }
    
    k--;
  }
}