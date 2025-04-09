#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    map<string,int> mp;
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++){
        string s;
        getline(cin,s);
        mp[s]++;
    }
    cout<<mp.size()<<'\n';
    return 0;
}