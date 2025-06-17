#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        set<char> leftSet;
        leftSet.insert(s[0]);
        bool found = false;

        for (int i = 1; i < n-1; i++) {
            if (leftSet.count(s[i])) {
                found = true;
                break;
            }
            leftSet.insert(s[i]);
        }

        if (found) {
            cout << "Yes\n";
            continue;
        }

        set<char> rightSet;
        for (int j = n-1; j >= 2; j--) {
            rightSet.insert(s[j]);
            if (rightSet.count(s[j-1])) {
                found = true;
                break;
            }
        }

        cout << (found ? "Yes\n" : "No\n");
    }
    return 0;
}