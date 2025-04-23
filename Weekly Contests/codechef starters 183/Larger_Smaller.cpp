#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int max_v=v.back();
        int min_v=v[0];
        if(max_v-min_v!=0)
            cout<<(max_v-min_v-1)<<endl;
        else{
            cout<<0<<endl;
        }
    }
    
    return 0;
}