#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<int> v;
        for(int i=0; i<k; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        long long ans=0;
        for(int i=0; i<k-1; i++){
            ans+= ((v[i]-1)+v[i]);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}