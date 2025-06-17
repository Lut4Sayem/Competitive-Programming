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
        int l = s, r = s;
        for (int i = 0; i < n; i++) {
            int x_i;
            cin >> x_i;
            if (x_i < l) 
                l = x_i;
            if (x_i > r) 
                r = x_i;
        }
        int d1 = s - l;
        int d2 = r - s;
        int extra = (d1 < d2) ? d1 : d2;
        cout << (r - l + extra) << endl;
    }
    return 0;
}