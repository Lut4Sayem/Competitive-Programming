#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        string s;
        cin>>s;
        int swipes=0;
        bool can_he=true;
        for(auto c:s){
            if(c=='1'){
                swipes=x;
            }
            else{
                if(swipes>0){
                    swipes--;
                }
                else{
                    can_he=false;
                    break;
                }
            }
        }
        if(can_he) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}