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
        
        vector<int> A(n);
        unordered_set<int> mp;
        
        for (int i = 0; i < n; i++) {
            cin >> A[i];
            mp.insert(A[i]);
        }

        bool found = false;
        for (int i = 0; i < n && !found; i++) {
            for (int j = i; j < n; j++) {
                int sum = A[i] + A[j];
                if (mp.find(sum) == mp.end()) {  
                    cout << A[i] << " " << A[j] << endl;
                    found = true;
                    break; 
                }
            }
        }
        
        if (!found) {
            cout << -1 << endl;
        }
    }
    
    return 0;
}
