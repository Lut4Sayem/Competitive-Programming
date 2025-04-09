#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<string,int> holders;
    while(n--){
        string s;
        cin>>s;
        auto it =holders.find(s);
        if(it!=holders.end()){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        holders[s]++;

    }
    
    return 0;
}