#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 3) {
            cout << "1 3 2\n";
        } else {
            cout << "2 3 " << n << ' ';
            for (int i = 4; i < n; ++i) {
                cout << i << ' ';
            }
            cout << "1\n";
        }
    }
    return 0;
}

