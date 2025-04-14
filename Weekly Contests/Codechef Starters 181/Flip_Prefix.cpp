#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,valid_flips=0,ones=0,zeros=0;
        string s;
        cin>>n>>s;
        for(char ch:s){
            if (ch=='0') zeros++;
            else ones++;
            
            if(zeros==ones) valid_flips++;
        }
        cout<<(1LL<<valid_flips)<<endl;
        
    }
    
    return 0;
}