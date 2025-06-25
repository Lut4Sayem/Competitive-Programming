#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> get_divs(ll k) {
    vector<ll> d;
    if (k == 1) {
        d.push_back(1);
        return d;
    }
    for (ll i = 1; i * i <= k; ++i) {
        if (k % i == 0) {
            d.push_back(i);
            if (i != k / i) {
                d.push_back(k / i);
            }
        }
    }
    return d;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll x, y, z, c;
        cin >> x >> y >> z >> c;

        if (x == y) {
            cout << 0 << '\n';
            continue;
        }

        ll res = 2 * c;

        if (x % y == 0) {
            ll k = x / y;
            vector<ll> d = get_divs(k);
            ll mn = LLONG_MAX;
            for (ll t : d) {
                ll curr = y * t;
                ll diff = abs(z - curr);
                if (diff < mn) mn = diff;
            }
            if (mn < LLONG_MAX) {
                res = min(res, mn + c);
            }
        }

        if (y % x == 0) {
            ll k = y / x;
            vector<ll> d = get_divs(k);
            ll mn = LLONG_MAX;
            for (ll t : d) {
                ll curr = x * t;
                ll diff = abs(z - curr);
                if (diff < mn) mn = diff;
            }
            if (mn < LLONG_MAX) {
                res = min(res, mn + c);
            }
        }

        cout << res << '\n';
    }

    return 0;
}