#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        if(k%2==0){
            cout<<"NO"<<'\n';
        }
        else{
            cout<<"YES"<<'\n';
        }
    }
    
    return 0;
}