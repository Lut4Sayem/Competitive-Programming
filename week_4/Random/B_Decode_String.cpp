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
        string t;
        cin >> t;
        string result = "";
        for (int i = n - 1; i >= 0;) {
            if (t[i] == '0') {
                int num = (t[i - 2] - '0') * 10 + (t[i - 1] - '0');
                result += (char)('a' + num - 1);
                i -= 3;
            } 
            else {
                int num = t[i] - '0';
                result += (char)('a' + num - 1);
                i--;
            }
        }
        reverse(result.begin(), result.end());
        cout << result << endl;
    }
    return 0;
}
