#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> freq;
        for(int i=0; i<n*4; i++){
            freq[s[i]]++;
        }
        int count=0;
        for(auto [key,val]:freq){
            if(key!='?'){
                count+=min(val,n);
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}