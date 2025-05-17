#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin>>t;
    while(t--){
        long long n, s, m; 
        cin>>n>>s>>m;
        long long prev(0); 
        bool res=false;
        for(long long p = 0; p < n; p++){
            long long left, right; 
            cin>>left>>right;
            if(prev + s <= left) res=true;
            prev = right;
        }

        if(prev + s <= m) res=true;
        if (res) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}