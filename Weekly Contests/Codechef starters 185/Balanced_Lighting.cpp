#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int, int> freq = { {0, 0}, {1, 0}, {2, 0} };
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int red = freq[1];
        int blue = freq[2];
        int nocol = freq[0];
        int diff = abs(red - blue);
        if(nocol >= diff && (nocol - diff) % 2 == 0) {
            cout << "YES"<<endl;
        }
        else {
            cout << "NO"<<endl;
        }
    }

    return 0;
}
