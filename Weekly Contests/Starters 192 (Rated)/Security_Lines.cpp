#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int ans = INT_MAX;
        for (int i = 0; i < n; ++i) {
            int canbe = a[i] + (i + 1) / 2;
            ans = min(ans, canbe);
        }

        cout << ans << "\n";
    }

    return 0;
}