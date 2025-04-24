#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int, int, greater<int>> mp;
        for (int i = 0; i < n * (n - 1) / 2; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }
        int x = 0;
        for (auto& i: mp) {
            while(i.second > 0) {
                cout << i.first << ' ';
                i.second -= x;
                x++;
            }
        }
        cout << endl;
    }
    return 0;
}