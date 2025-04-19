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
        cout<<2<<endl;
        cout<<n<<" "<<n-1<<endl;
        int x=n,y=n-2;
        while(x>=3 && y>=1){
            cout<<x<<" "<<y<<endl;
            x--;
            y--;
        }
    }
    
    return 0;
}