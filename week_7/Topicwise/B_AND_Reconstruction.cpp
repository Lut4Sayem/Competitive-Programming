#include <bits/stdc++.h>
using namespace std;

vector<int> reconstruct(const vector<int>& b) {
    int n = b.size() + 1;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            a[i] = b[0];
        } else if (i == n - 1) {
            a[i] = b[n - 2];
        } else {
            a[i] = b[i] | b[i - 1];
        }

        if (i > 0 && (a[i] & a[i - 1]) != b[i - 1]) {
            return {-1}; 
        }
    }

    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            cin >> b[i];
        }

        vector<int> a = reconstruct(b);
        if (a.size() == 1 && a[0] == -1) {
            cout << -1 << "\n";
        } else {
            for (int val : a) {
                cout << val << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
