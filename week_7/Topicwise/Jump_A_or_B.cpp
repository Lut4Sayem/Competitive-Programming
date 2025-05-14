#include<bits/stdc++.h>
using namespace std;
bool can_he(int n,int m,int a,int b){
    if(a==b){
        return (a*n==m);
    }
    int hor=a-b;
    int lob=m-b*n;
    if(lob%hor!=0) return false;
    if(lob/hor>=0 && lob/hor<=n) return true;
    else return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        if(can_he(n,m,a,b)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    
    return 0;
}