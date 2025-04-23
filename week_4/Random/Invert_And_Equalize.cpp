#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int count_0=0,count_1=0;
        char prev=' ';
        for(int i=0; i<n; i++){
            if(i==0 || s[i]!=prev){
                if(s[i]=='0') count_0++;
                else count_1++;
                prev=s[i];
            }
        }
        cout<<min(count_0,count_1)<<endl;
    }
    
    return 0;
}
