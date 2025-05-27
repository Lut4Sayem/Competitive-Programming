#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int &num : nums) cin >> num;
    int andResult = nums[0];
    for (int num : nums) {
        andResult &= num;
    }
    long long result = 0;
    for (int bit = 0; bit < 31; ++bit) {
        if (andResult & (1 << bit)) {
            result += (1LL << bit);
        }
    }

    cout << result << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}