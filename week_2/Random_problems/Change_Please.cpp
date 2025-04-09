#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        float n;
        cin>>n;
        int notes=100-(ceil(n/10))*10;
        cout<<notes<<endl;

    }
    
    return 0;
}