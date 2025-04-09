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
        int break_count=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x>1) break_count+=(x-1);
        }
        cout<<break_count<<endl;
    }
    
    return 0;
}