#include<bits/stdc++.h>
using namespace std;
int main(){
int number;
cin>>number;
int temp;
int count = 0;
if(number==47 || number%47==0 || number%4==0 || number%7==0){
  cout<<"YES";
}
else{
  while(number!=0){
    temp = number%10;

    if(temp!=4 && temp!=7){
      count = 1;
      break;
    }
    
    number /= 10;
}
if(count == 1){
  cout<<"NO";
}
if(count==0){
  cout<<"YES";
}
}
}