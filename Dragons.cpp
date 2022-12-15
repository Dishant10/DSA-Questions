#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int s,n;
  cin>>s>>n;
  int count=0;
  vector<pair<int,int>> v;
    for(int i=0;i<n;++i){
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(),v.end());
    for(auto ele:v){
      if(s<=ele.first){
        count=1;
        cout<<"NO";
        break;
      }
      else{
        s=s+ele.second;
      }
    }
    if(count==0){
      cout<<"YES";
    }
    
}