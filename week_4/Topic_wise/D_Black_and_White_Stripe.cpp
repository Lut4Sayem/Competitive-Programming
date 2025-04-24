#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans=n;
        int i=0,j=0;
        int whites=0;
        while(j<n){
            if(s[j]=='W'){
                whites++;
            }
            if(j-i+1<k){
                j++;
                continue;
            }
            ans=min(ans,whites);
            j++;
            if(s[i]=='W'){
                whites--;
            }
            i++;
        }
        cout<<ans<<endl;

    }
    
    return 0;
}