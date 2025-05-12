#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--) {
        ll n,p,ans=0;
        cin>>n;
        vector < ll > v;
        for(ll i = 1 ; i <= n ; i++) {
            cin>>p;
            if(abs(p-i)!=0) {
                ans = __gcd(ans,abs(p-i));
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}