#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        string s;
        cin>>n>>k;
        cin>>s;
        map<char,int> mp;
        for(auto ch:s){
            mp[ch]++;
        }
        int odd=0;
        for(auto it:mp){
           int odd_count= it.second;
           if(odd_count%2!=0) odd++;
        }

        if(k>=odd-1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}