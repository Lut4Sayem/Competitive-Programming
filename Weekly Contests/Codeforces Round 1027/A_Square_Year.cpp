#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        int n,x;
        cin>>s;
        n=stoi(s);
        x=sqrt(n);
        if(x*x != n){
            cout<<-1;
        }
        else cout<<x<<" "<<0;
        cout<<endl;
    }
    
    return 0;
}