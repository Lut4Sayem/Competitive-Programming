#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    map<int, int> freq;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        freq[x]++;
    }

    int max_freq = 0;
    for (auto [num, count] : freq){
        max_freq = max(max_freq, count);
    }

    cout << max_freq << "\n";

    return 0;
}
