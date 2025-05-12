#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, ans = 0, sum = 0, prev = 0, mx = 0;
        cin >> n;
        vector<ll> v(n);
        for (ll j = 0; j < n; j++)
            cin >> v[j];
        for (ll j = 0; j < n; j++)
        {
            mx = max(mx, v[j]);
            sum += v[j];
            if (mx == sum - mx)
                ans++;
        }
        cout << ans << endl;
    }
    
    return 0;
}