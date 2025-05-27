#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int x = 0;
    for (int i = 0; i < n; ++i)
        x |= v[i];

    cout << x << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
