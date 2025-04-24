#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int zeros=0,ones=0;
        for(char x:s){
            if(x=='0') zeros++;
            else ones++;
        }
        int ans=ones*(n-1) + zeros;
        cout<<ans<<endl;

    }
    
    return 0;
}