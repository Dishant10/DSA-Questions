#include<bits/stdc++.h>
using namespace std;
int main(){
  string inputString;
  string outputString="";
  cin>>inputString;
  for(int i = 0; i<inputString.size();++i){
    if(inputString[i]=='a' || inputString[i]=='e' || inputString[i]=='A' || inputString[i]=='E' || inputString[i]=='i' || inputString[i]=='I' || inputString[i]=='o' || inputString[i]=='O' || inputString[i]=='u' || inputString[i]=='U' || inputString[i]=='Y' || inputString[i]=='y'){
      continue;
    }
    else{
      if(isupper(inputString[i])){
        inputString[i] = tolower(inputString[i]);
      }
      outputString = outputString + "." + inputString[i];
    }
  }
  cout<<outputString;
}