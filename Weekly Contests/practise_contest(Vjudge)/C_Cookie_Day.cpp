#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        set<long long int>cookies;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            cookies.insert(x);
        }
        long long int waste=INT_MAX;
        for(int x:cookies){
            if(x/k>0 and x%k>=0)
                waste=min(waste,x%k);
        }
        if(waste>=0 && waste!=INT_MAX){
            cout<<waste<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    
    return 0;
}