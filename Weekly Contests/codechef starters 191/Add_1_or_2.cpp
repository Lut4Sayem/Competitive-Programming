#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
typedef long long ll;

bool feasible(ll x, const vector<ll>& a, const vector<ll>& b, ll T, int n) {
    ll total_min = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > x) 
            return false;
        ll d = x - a[i];
        ll min_val = min(d, (d + b[i]) / 2);
        total_min += min_val;
    }
    return total_min >= T;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        ll T = 0;
        for (ll x : b) {
            T += x;
        }
        ll low = *max_element(a.begin(), a.end());
        ll high = low + 2 * T;
        ll ans = high;
        while (low <= high) {
            ll mid = low + (high - low) / 2;
            if (feasible(mid, a, b, T, n)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}