#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int l=0,r=0,ans=0;
    long long sum=0;
    while(r<n){
        sum+=v[r];
        if(sum<=k){
            ans=max(ans,r-l+1);
        }
        else{
            sum-=v[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;
    
    return 0;
}