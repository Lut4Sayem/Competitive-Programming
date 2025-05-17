#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define endl '\n'


void solve(){
    int n;
    cin>>n;
    int a = 1;
    int b = 0;
    int count = 0;
    while (a*2<=n){
        a = a*2;
        count++;
    }
    for (int i = count - 1; i >= 0; i--) {
        if ((n&1<<i)){
            b = b | (1<<i);
        }
    }
    cout<<b<<" "<<a<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}