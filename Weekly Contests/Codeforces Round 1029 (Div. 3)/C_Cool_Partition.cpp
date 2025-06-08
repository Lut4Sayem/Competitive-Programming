#include<bits/stdc++.h>
using namespace std;
struct ST {
    vector<vector<int>> st;
    vector<int> logs;
    int n;
    ST() : n(0) {}

    void build(const vector<int>& arr) {
        n = arr.size();
        if (n == 0) return;
        logs.assign(n + 1, 0);
        for (int i = 2; i <= n; i++) logs[i] = logs[i / 2] + 1;

        st.assign(n, vector<int>(logs[n] + 1));
        for (int i = 0; i < n; i++) st[i][0] = arr[i];

        for (int j = 1; j <= logs[n]; j++) {
            for (int i = 0; i + (1 << j) <= n; i++) {
                st[i][j] = max(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
            }
        }
    }

    int query(int l, int r) {
        if (l > r) return -1;
        int j = logs[r - l + 1];
        return max(st[l][j], st[r - (1 << j) + 1][j]);
    }
};

bool check(int k, int n, ST& st) {
    if (k == 1) return true;
    if (k > n) return false;

    vector<int> p(k + 1);
    p[0] = 0;
    p[1] = 1;

    for (int i = 2; i < k; ++i) {
        if (p[i - 1] >= n) return false;
        int l = p[i - 2];
        int r = p[i - 1] - 1;
        int new_p = st.query(l, r);
        if (new_p > n) return false;
        p[i] = new_p;
    }

    if (p[k - 1] >= n) return false;
    int l = p[k-2];
    int r = p[k-1] - 1;
    return st.query(l, r) <= n;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    vector<int> nxt(n);
    vector<int> pos(n + 1, 0); 

    for (int i = n - 1; i >= 0; --i) {
        nxt[i] = (pos[a[i]] == 0) ? (n + 1) : pos[a[i]];
        pos[a[i]] = i + 1;
    }

    ST st;
    st.build(nxt);

    int low = 1, high = n, ans = 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (check(mid, n, st)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}