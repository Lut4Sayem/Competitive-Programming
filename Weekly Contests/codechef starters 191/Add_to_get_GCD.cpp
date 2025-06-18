#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        long long g = gcd(x, y);
        if (g > 1) {
            cout << "0"<<endl;
        } else {
            if (gcd(x + 1, y) > 1) {
                cout << "1"<<endl;
            } else if (gcd(x, y + 1) > 1) {
                cout << "1"<<endl;
            } else {
                cout << "2"<<endl;
            }
        }
    }
    return 0;
}