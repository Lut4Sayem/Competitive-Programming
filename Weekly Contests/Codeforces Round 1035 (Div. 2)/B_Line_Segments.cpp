#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll px, py, qx, qy;
        cin >> px >> py >> qx >> qy;
        vector<int> a(n);
        ll s = 0;
        int m = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s += a[i];
            if (a[i] > m) m = a[i];
        }

        ll dx = px - qx;
        ll dy = py - qy;
        ll D_sq = dx * dx + dy * dy;
        ll totalsq = s * s;

        if (D_sq > totalsq) {
            cout << "No\n";
        } else {
            if (2LL * m <= s) {
                cout << "Yes\n";
            } else {
                ll diff = 2LL * m - s;
                ll low_bound = diff * diff;
                if (D_sq >= low_bound) {
                    cout << "Yes\n";
                } else {
                    cout << "No\n";
                }
            }
        }
    }
    return 0;
}