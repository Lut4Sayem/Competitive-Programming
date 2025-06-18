#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string s0, s1;
        cin >> s0 >> s1;
        vector<int> ones0, ones1;
        for (int i = 0; i < n; i++) {
            if (s0[i] == '1') ones0.push_back(i);
        }
        for (int i = 0; i < n; i++) {
            if (s1[i] == '1') ones1.push_back(i);
        }
        int t0 = ones0.size();
        int t1 = ones1.size();
        vector<long long> prefix0;
        if (t0 > 0) {
            prefix0.resize(t0);
            prefix0[0] = ones0[0];
            for (int i = 1; i < t0; i++) {
                prefix0[i] = prefix0[i-1] + ones0[i];
            }
        }
        int j_min = max(0, n - t1);
        int j_max = min(t0 - 1, n - 1);
        if (j_min > j_max) {
            cout << -1 << endl;
            continue;
        }
        long long best = LLONG_MAX;
        int k0 = n - j_min;
        int L0 = t1 - k0;
        long long F = 0;
        for (int i = 0; i < k0; i++) {
            int pos = ones1[L0 + i];
            int target = j_min + i;
            F += abs(pos - target);
        }
        long long cost1_val = 0;
        if (j_min < t0) {
            cost1_val = prefix0[j_min] - (long long)j_min * (j_min + 1) / 2;
        }
        best = cost1_val + F;
        long long currentF = F;
        for (int j = j_min + 1; j <= j_max; j++) {
            int L_prev = t1 - n + j - 1;
            int pos0 = ones1[L_prev];
            int term = abs(pos0 - (j - 1));
            currentF -= term;
            long long cost1_j = 0;
            if (j < t0) {
                cost1_j = prefix0[j] - (long long)j * (j + 1) / 2;
            }
            long long total_cost = cost1_j + currentF;
            if (total_cost < best) {
                best = total_cost;
            }
        }
        cout << best << endl;
    }
    return 0;
}