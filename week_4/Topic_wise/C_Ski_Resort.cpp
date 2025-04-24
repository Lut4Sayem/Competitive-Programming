#define ll long long int
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;                     
    cin>>T;
    while(T--){
      ll n,k,q;               
      cin>>n>>k>>q;
      vector<ll> a(n);
      for(int i=0;i<n;i++){
         cin>>a[i];
        }
      ll ans=0;
      ll consecutive=0;
      for(int i=0;i<n;i++){
         if(a[i]<=q){
            consecutive++;
            if(i==n-1 or a[i+1]>q){
               if(consecutive>=k){
                  ll x=consecutive-k+1LL;
                  ll y=(x*(x+1LL))/2LL;
                  ans+=y;
               }
               consecutive=0;
            }
         }
      }
 
      cout<<ans<<endl;
   }
    
    return 0;
}