#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int d;
  cin>>n>>d;
  vector<int> v;
  int sum=0;
  for(int i=0;i<n;++i){
    int temp;
    cin>>temp;
    v.push_back(temp);
    sum=sum+v[i];
  }
  int rest=(n-1)*10;
  if(rest>=d || sum>d || sum+rest>d){
    cout<<-1;
  }
  else{
    int jokes;
    jokes=(rest/5)+(d-rest-sum)/5;
    cout<<jokes;
  }

}