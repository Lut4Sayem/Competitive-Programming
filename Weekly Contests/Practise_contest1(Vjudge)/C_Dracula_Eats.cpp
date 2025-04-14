#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    vector<int> days_to_reach={1,0,6,5,4,3,2};
    while(t--){
        int n,count=0;
        cin>>n;
        int i=0;
        int m=n;
        while(m--){
            if(days_to_reach[i]==0) count++;
            if(i==6) i=0;
            else i++;
        }
        cout<<count<<endl;


    }
    
    return 0;
}