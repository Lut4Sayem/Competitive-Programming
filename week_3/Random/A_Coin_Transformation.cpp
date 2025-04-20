#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n<3) {
            cout<<1<<endl;
            continue;
        }
        long long count=1;
        
        while(n>3){
                n/=4;
                count*=2;
        }
        cout<<count<<endl;
    }
    
    return 0;
}