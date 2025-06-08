#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> doors(n);
        for (int i = 0; i < n; ++i) {
            cin >> doors[i];
        }

        bool can = false;
        for (int i = 0; i < n; ++i) {
            bool can2 = true;
            for (int j = 0; j < n; ++j) {
                if (j < i || j >= i + x) {
                    if (doors[j] == 1) {
                        can2 = false;
                        break;
                    }
                }
            }

            if (can2) {
                can = true;
                break;
            }
        }

        cout << (can ? "YES" : "NO") << endl;
    }

    return 0;
}
