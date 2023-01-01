#include<bits/stdc++.h>
using namespace std;
int main(){
  string a,b,c,d;
  cin>>a>>b>>c>>d;
  int sizeA=size(a)-2;
  int sizeB=size(b)-2;
  int sizeC=size(c)-2;
  int sizeD=size(d)-2;
  int countB=0,countA=0,countC=0,countD=0;
  if(sizeA*2<=sizeB && sizeA*2<=sizeC && sizeA*2<=sizeD){
    countA++;
  }
  if(sizeA>=sizeB*2 && sizeA>=sizeC*2 && sizeA>=sizeD*2){
    countA++;
  }
  if(sizeB>=sizeA*2 && sizeB>=sizeC*2 && sizeB>=sizeD*2)
  {
    countB++;
  }
  if(sizeB*2<=sizeA && sizeB*2<=sizeC && sizeB*2<=sizeD){
    countB++;
  }
  if(sizeC*2<=sizeB && sizeC*2<=sizeA && sizeC*2<=sizeD){
    countC++;
  }
  if(sizeC>=sizeA*2 && sizeC>=sizeB*2 && sizeC>=sizeD*2){
    countC++;
  }
   if(sizeD>=sizeA*2 && sizeD>=sizeC*2 && sizeD>=sizeB*2){
    countD++;
  }
  if(sizeD*2<=sizeB && sizeD*2<=sizeA && sizeD*2<=sizeC){
    countD++;
  }
  if(countA==0 && countB==0 && countC==0 && countD==0){
    cout<<"C";
  }
  else{
    int count=0;
    string ans;
    if(countA>0){
      count++;
      ans="A";
    }
    if(countB>0){
      count++;
      ans="B";
    }
    if(countC>0){
      count++;
      ans="C";
    }
    if(countD>0){
      count++;
      ans="D";
    }
    if(count==1){
      cout<<ans;

    }
    else{
      cout<<"C";
    }
  }
}