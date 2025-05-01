#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        ll b[n];
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }

        ll l=0,r=0;
        ll fruits=0;
        ll length=0;
        for(ll i=0;i<n;i++){
            if(l==r){
                fruits+=a[i];
                if(fruits<=k){
                    length=max(length,r-l+1);
                }
                if(i<n-1 && b[i]%b[i+1]==0 && fruits<=k) {
                    r++;
                }
                else{
                    r++;
                    l++;
                    fruits=0;
                }
            }
            else if(b[i-1]%b[i]==0){
                fruits+=a[i];
                if(fruits<=k){
                    length=max(length,r-l+1);
                }
                if(i<n-1 && b[i]%b[i+1]==0 && fruits<=k) {
                    r++;
                }
                else{
                    r++;
                    l++;
                    fruits-=a[l-1];
                }
            }
            else{
                l=r;
                fruits=0;
                i--;
            }
        }
        cout<<length<<endl;

    }
    return 0;
}