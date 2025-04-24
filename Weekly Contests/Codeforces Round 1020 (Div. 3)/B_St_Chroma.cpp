#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>ans;
        for(int i=0; i<x; i++){
            ans.push_back(i);
        }
        for(int i=x+1; i<n; i++){
            ans.push_back(i);
        }
        if(ans.size()!=n){
            ans.push_back(x);
        }
        for(int f:ans){
            cout<<f<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}