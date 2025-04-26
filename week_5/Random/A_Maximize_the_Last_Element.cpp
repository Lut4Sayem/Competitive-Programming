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
        vector<int> v1;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            v1.push_back(x);
        }
        int ans=0;
        for(int i=0; i<n; i+=2){
            if(v1[i]>ans){
                ans=v1[i];
            }
        }
        cout<<ans<<endl;

    }
    
    return 0;
}