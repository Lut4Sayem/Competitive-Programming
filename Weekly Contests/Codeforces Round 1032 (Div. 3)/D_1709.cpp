#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<int> all;
        for (int i = 0; i < n; i++) {
            all.push_back(a[i]);
            all.push_back(b[i]);
        }
        sort(all.begin(), all.end());
        set<int> T;
        for (int i = 0; i < n; i++) {
            T.insert(all[i]);
        }

        vector<pair<int, int>> ops;

        for (int i = 0; i < n; i++) {
            if (T.find(a[i]) == T.end()) {
                swap(a[i], b[i]);
                ops.push_back({3, i+1});
            }
        }

        for (int i = n-1; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                if (a[j] > a[j+1]) {
                    swap(a[j], a[j+1]);
                    ops.push_back({1, j+1});
                }
            }
        }

        for (int i = n-1; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                if (b[j] > b[j+1]) {
                    swap(b[j], b[j+1]);
                    ops.push_back({2, j+1});
                }
            }
        }

        cout << ops.size() << '\n';
        for (auto op : ops) {
            cout << op.first << " " << op.second << '\n';
        }
    }
    return 0;
}