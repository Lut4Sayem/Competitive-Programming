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
        string s="aeiou";
        long long int x=n/5;
        long long int y=n%5;
        vector<char>ans;
        for(int i=0; i<x; i++){
            for(int j=0; j<5; j++){
                ans.push_back(s[j]);
            }
        }
        if(y!=0){
            for(int i=0; i<y; i++){
                ans.push_back(s[i]);
            }
        }
        sort(ans.begin(),ans.end());
        for(auto ch:ans){
            cout<<ch;
        }
        cout<<endl;
    }
    
    return 0;
}