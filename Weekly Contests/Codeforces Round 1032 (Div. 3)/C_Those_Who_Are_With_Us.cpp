#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        int m0 = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                if (a[i][j] > m0) {
                    m0 = a[i][j];
                }
            }
        }

        vector<pair<int, int>> s;
        set<int> rs, cs;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == m0) {
                    s.push_back({i, j});
                    rs.insert(i);
                    cs.insert(j);
                }
            }
        }
        int rcnt = rs.size();
        int ccnt = cs.size();

        vector<set<int>> cols_in_row(n);
        vector<int> fcol(m, 0);
        for (auto p : s) {
            int i = p.first;
            int j = p.second;
            cols_in_row[i].insert(j);
            fcol[j]++;
        }

        vector<int> exc_col(m, 0);
        for (int i = 0; i < n; i++) {
            if (cols_in_row[i].size() == 1) {
                int j = *(cols_in_row[i].begin());
                exc_col[j]++;
            }
        }

        bool covered = false;
        for (int i = 0; i < n; i++) {
            if (cols_in_row[i].empty()) continue;
            int cnt_exc = 0;
            for (int j : cols_in_row[i]) {
                if (fcol[j] == 1) {
                    cnt_exc++;
                }
            }
            if (ccnt - cnt_exc <= 1) {
                covered = true;
                break;
            }
        }

        if (!covered) {
            for (int j = 0; j < m; j++) {
                if (fcol[j] == 0) continue;
                if (rcnt - exc_col[j] <= 1) {
                    covered = true;
                    break;
                }
            }
        }

        int ans = covered ? (m0 - 1) : m0;
        cout << ans << '\n';
    }
    return 0;
}