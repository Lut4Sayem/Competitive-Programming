#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    map<string,string> mp1;
    map<string,string> mp2;
    for(int i=0; i<n; i++){
        string s1,s2;
        cin>>s1>>s2;
        mp1[s2]=s1;
    }
    for(int i=0; i<m; i++){
        string command,ip;
        cin>>command>>ip;
        ip.pop_back();
        cout<<command<<" "<<ip<<"; #"<<mp1[ip]<<endl;

    }
    return 0;
}