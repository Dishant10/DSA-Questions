#include <iostream>
#include<vector>
#include <unordered_map>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int n;
	    cin>>n;
	    vector<int> v;
	    unordered_map<int,int> m;
	    for(int i=0;i<n;++i){
	        int temp;
	        cin>>temp;
	        v.push_back(temp);
	        m[temp]++;
	    }
	    if(n%2!=0){
	        cout<<"NO"<<"\n";
	    }
	    else{
	        int count=0;
	        for(auto ele:v){
	            if(m[ele]%2!=0){
	               count=0;
	            }
	            else if(m[ele]%2==0){
	                count++;
	            }
	        }
	        if(count!=0 && count==n){
	            cout<<"YES"<<"\n";
	        }
	        else if(count==0){
	             cout<<"NO"<<"\n";
	        }
	    }
	    --t;
	}
	return 0;
}
