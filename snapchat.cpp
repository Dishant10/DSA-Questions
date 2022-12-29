#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<n;++i){
            int temp;
            cin>>temp;
            v1.push_back(temp);
        }
        for(int i=0;i<n;++i){
            int temp;
            cin>>temp;
            v2.push_back(temp);
        }
        int count1=0,count2=0;
        for(int i=0;i<n;++i){
            if(v1[i]!=0 && v2[i]!=0){
                count1++;
            }
            else if(v1[i]==0 || v2[i]==0){
                
                count1=0;
            }
            count2=max(count1,count2);
        }
        if(count2==0){
          count2=count1;
        }
        cout<<count2<<"\n";
        --t;
    }
	return 0;
}
