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
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int res = 0;
        int last = -INT_MAX; 
        for (int i = 0; i < n; ++i) {
            if (a[i] > last + 1) {
                res++;
                last = a[i];
            }
        }
        cout << res << '\n';
    }
    return 0;
}