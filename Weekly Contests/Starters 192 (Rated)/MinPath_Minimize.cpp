#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> fixed(n, 0);
        vector<bool> is_fixed(n, false);
        vector<int> deg(n, 0);
        vector<vector<int>> g(n);
        vector<int> missing(n + 1, 0);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            fixed[i] = a[i];
            is_fixed[i] = (a[i] != 0);
        }

        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            u--; v--;
            g[u].push_back(v);
            g[v].push_back(u);
            deg[u]++;
            deg[v]++;
        }

        vector<int> cnt_fixed(n + 2, 0);
        for (int i = 0; i < n; i++) {
            if (is_fixed[i]) {
                if (a[i] <= n) {
                    cnt_fixed[a[i]] = 1;
                }
            }
        }

        vector<int> mis_list;
        for (int i = 1; i <= n; i++) {
            if (!cnt_fixed[i]) {
                mis_list.push_back(i);
            }
        }
        int m = mis_list.size();

        vector<int> low_available(n + 2, 0);
        vector<int> ge_available(n + 2, 0);
        vector<int> prefix_avail(n + 2, 0);

        for (int i = 1; i <= n; i++) {
            low_available[i] = (i > 1 ? low_available[i - 1] : 0);
            if (!cnt_fixed[i]) {
                low_available[i]++;
            }
        }

        for (int i = n; i >= 1; i--) {
            ge_available[i] = (i < n ? ge_available[i + 1] : 0);
            if (!cnt_fixed[i]) {
                ge_available[i]++;
            }
        }

        for (int i = 1; i <= n; i++) {
            prefix_avail[i] = prefix_avail[i - 1] + (!cnt_fixed[i] ? 1 : 0);
        }

        int ans = n + 1;
        vector<bool> can_cover(n + 2, false);
        vector<bool> covered(n + 2, false);

        for (int k = 2; k <= n + 1; k++) {
            bool found_candidate = false;
            for (int u = 0; u < n; u++) {
                if (is_fixed[u] && a[u] != k) {
                    continue;
                }
                bool candidate_ok = true;
                int count_zero = 0;
                for (int v : g[u]) {
                    if (is_fixed[v]) {
                        if (a[v] >= k || a[v] == 0) {
                            candidate_ok = false;
                            break;
                        }
                    } else {
                        count_zero++;
                    }
                }
                if (!candidate_ok) {
                    continue;
                }

                int avail_count = (k - 1) - (prefix_avail[k - 1] - (m - prefix_avail[n]));
                if (avail_count < count_zero) {
                    continue;
                }

                bool cover_ok = true;
                for (int i = 1; i < k; i++) {
                    if (covered[i]) {
                        continue;
                    }
                    bool found = false;
                    for (int w = 0; w < n; w++) {
                        if (w == u) continue;
                        if (is_fixed[w] && a[w] == i) {
                            for (int x : g[w]) {
                                int val_x;
                                if (is_fixed[x]) {
                                    val_x = a[x];
                                } else if (x == u) {
                                    val_x = k;
                                } else {
                                    val_x = -1;
                                }
                                if (val_x >= i) {
                                    found = true;
                                    break;
                                }
                            }
                            if (found) break;
                        }
                    }
                    if (!found) {
                        cover_ok = false;
                        break;
                    }
                }

                if (cover_ok) {
                    found_candidate = true;
                    break;
                }
            }

            if (found_candidate) {
                ans = k;
                break;
            }

            for (int i = 0; i < n; i++) {
                if (is_fixed[i] && a[i] == k - 1) {
                    for (int j : g[i]) {
                        if (!is_fixed[j] || a[j] >= k - 1) {
                            covered[k - 1] = true;
                            break;
                        }
                    }
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}