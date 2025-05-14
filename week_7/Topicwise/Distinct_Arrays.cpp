#include <bits/stdc++.h>
using namespace std;
int MOD = 998244353;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long result = 1;
    for (int i = 0; i < n; ++i) {
        int available = a[i] - i; 
        if (available <= 0) {
            cout << 0 << endl;
            return;
        }
        result = (result * available) % MOD;
    }
    cout << result << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}