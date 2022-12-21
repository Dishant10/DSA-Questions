#include<bits/stdc++.h>
using namespace std;
int solve(int a,vector<int> &av,int count,int digits){
  while(a>0){
    int temp=a%10;
    if(temp!=0){
      av.push_back(temp);
    }
    else if(temp==0){
      count++;
    }
    a=a/10;
    digits++;
  }
  reverse(av.begin(), av.end());
  int newA=0;
  for(int i=0,j=av.size()-1;i<av.size();++i,--j){
    newA=newA+av[i]*pow(10,j);
  }
  return newA;
}
int main(){
  int a,b;
  cin>>a;
  cin>>b;
  vector<int> av;
  vector<int> bv;
  int countA=0;
  int sum1=a+b;
  int digitsA=0;
  int newA=solve(a,av,countA,digitsA);
  
  
  int countB=0;
  int digitsB=0;
  int newB=solve(b,bv,countB,digitsB);
  vector<int> sumv;
  int newSum=solve(sum1,sumv,0,0);
  if(newA+newB==newSum){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
}