#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int zero = 0, one = 0;
        for (char c : s) {
            if (c == '0') zero++;
            else one++;
        }
        int total_pairs = n / 2;
        if (k > total_pairs) {
            cout << "NO\n";
            continue;
        }
        int bad_pairs = total_pairs - k;
        if (zero >= bad_pairs && one >= bad_pairs) {
            int rem_z = zero - bad_pairs;
            int rem_o = one - bad_pairs;
            if (rem_z % 2 == 0 && rem_o % 2 == 0 && (rem_z + rem_o) == 2 * k) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}