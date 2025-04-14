#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c,d;
    int x=0,y=0;
    cin>>a>>b>>c>>d;
    x+=a;
    y+=b;
    x-=c;
    y-=d;
    cout<<x<<" "<<y;
    
    return 0;
}