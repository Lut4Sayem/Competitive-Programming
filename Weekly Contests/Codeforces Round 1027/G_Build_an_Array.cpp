#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        bool can = false;
        if (n == 1) {
            can = true;
        } else {
            int l_unique = (a[0] != a[1]) ? 1 : 0;
            int r_unique = (a[n-1] != a[n-2]) ? 1 : 0;
            if (l_unique || r_unique) {
                can = true;
            } else {
                can = false;
            }
        }
        if (can && k >= n) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }
    return 0;
}