#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n, l, r, k;
        cin >> n >> l >> r >> k;

        if (n % 2 == 1) {
            cout << l << '\n';
        } else {
            if (n == 2) {
                cout << "-1\n";
            } else {
                ll y_val = l;
                while (y_val <= r) {
                    if ((l & y_val) == 0) {
                        break;
                    }
                    ll diff = l & y_val;
                    if (diff == 0) 
                        break;
                    ll low = diff & -diff;
                    y_val = (y_val + low) & ~(low - 1);
                }
                if (y_val > r) {
                    cout << "-1\n";
                } else {
                    ll group_index = (k - 1) / 2;
                    if (group_index % 2 == 0) {
                        cout << l << '\n';
                    } else {
                        cout << y_val << '\n';
                    }
                }
            }
        }
    }
    return 0;
}