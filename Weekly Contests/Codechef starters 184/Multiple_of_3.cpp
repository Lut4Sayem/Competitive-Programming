#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int prev=INT_MAX;
    int ans=0;
    for(int i=0; i<=n; i++){
        int x=i*3;
        if(abs(n-x)<prev){
            ans=x;
        }
        prev=abs(n-x);
    }
    cout<<ans;
    
    return 0;
}