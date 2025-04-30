#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        int sum = 0;
        int ans = INT_MAX;
        int l = 0, r = 0;
        while(r < n) {
            sum += v[r++];
            if (sum == s) {
                ans = min(ans, n - (r - l));
            }
            if (sum > s) sum -= v[l++];
        }
        if (ans == INT_MAX) ans = -1;
        cout << ans << endl;
    }
    return 0;
}