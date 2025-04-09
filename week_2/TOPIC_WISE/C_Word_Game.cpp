#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m=3;
        cin>>n;
        map<string,vector<int>> mp;
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                string s;
                cin>>s;
                mp[s].push_back(i);
            }
        }
        vector<int> answer(m+1);
        for(auto [key,val]:mp){
            vector<int> v=val;
            if(v.size()==1){
                answer[v[0]]+=3;
            }
            else if(v.size()==2){
                answer[v[0]]++;
                answer[v[1]]++;
            }
        }   
        for(int i=1; i<=m; i++){
            cout<<answer[i]<<" ";
        }  
        cout<<endl;   
    }
    
    return 0;
}