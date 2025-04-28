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
        char prev='1';
        map<char,int>freq;
        for(auto ch:s){
            if(ch=='0' && prev=='1'){
                freq[ch]++;
            }
            if(ch=='1'){
                freq[ch]++;
            }
            prev=ch;
        }
        if(freq['1']>freq['0']) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    
    return 0;
}