#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<string,string> nw,old;
    for(int i=0; i<n; i++){
        string a,b;
        cin>>a>>b;
        if(old.find(a)!=old.end()){
            string s=old[a];
            nw[s]=b;
            old.erase(a);
            old[b]=s;
        }
        else{
            nw[a]=b;
            old[b]=a;
        }

    }
    cout<<nw.size()<<'\n';
    for(auto [key,val]:nw){
        cout<<key<<' '<<val<<'\n';
    }
    
    return 0;
}