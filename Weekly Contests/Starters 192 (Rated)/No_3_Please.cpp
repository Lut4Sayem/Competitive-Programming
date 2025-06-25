#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> modP(n+1);
        modP[0] = 0;
        bool original_good = true;
        for (int i = 1; i <= n; i++) {
            modP[i] = (modP[i-1] + a[i-1]) % 3;
            if (modP[i] == 0) {
                original_good = false;
            }
        }
        if (original_good) {
            cout << "Yes\n";
            continue;
        }
        vector<bool> sc(n+2, false);
        sc[n+1] = true;
        for (int i = n; i >= 0; i--) {
            sc[i] = (modP[i] != 0) && sc[i+1];
        }
        bool present[3] = {false};
        present[0] = true;
        bool found = false;
        for (int k = 1; k <= n; k++) {
            int m = modP[k] % 3;
            if (m < 0) m += 3;
            if (!present[m] && sc[k+1]) {
                found = true;
                break;
            }
            present[m] = true;
        }

        if (found) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}