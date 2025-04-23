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
        int a=n,b=n-1,c=n-2;
        if((2*a)<(a+b+c)){
            cout<<a+b+c<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    
    return 0;
}