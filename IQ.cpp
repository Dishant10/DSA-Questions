#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> v;
  int countEven=0,countOdd=0;
  for(int i=0;i<n;++i){
    int temp;
    cin>>temp;
    v.push_back(temp);
    if(temp%2==0){
      countEven++;
    }
    else if(temp%2!=0){
      countOdd++;
    }
    if(i>n/2 && (countEven==1 || countOdd==1)){
        if(countEven==1){
          countEven=0;
        }
        else if(countOdd==1){
          countOdd=0;
        }
        break;
      
    }
  }
  
  for(int i=0;i<v.size();++i){
    if(countEven==0){
      if(v[i]%2==0){
        cout<<i+1;
      }
    }
    else if(countOdd==0){
      if(v[i]%2!=0){
        cout<<i+1;
      }
    }
  }
}