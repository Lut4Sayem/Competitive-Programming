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

        int ones = 0, twos = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x == 1) ones++;
            else twos++;
        }
        int for_one = twos;
        int for_two;
        if (ones % 2 == 0) {
            for_two = ones / 2;
        } else {
            for_two = 1000000000;
        }
        cout << min(for_one, for_two) << endl;
    }

    return 0;
}
