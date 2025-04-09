#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,first=0,last=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n; i++){
            if(s[i]=='B') {
                first=i;
                break;
            }
        }
        for(int i=0; i<n; i++){
            if(s[i]=='B') last=i;
        }
        cout<<(last-first)+1<<'\n';
        
    }
    
    return 0;
}