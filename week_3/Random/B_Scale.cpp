#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long t;
    cin >> t;
    while(t--){
        long n, k;
        cin >> n >> k;
        vector<string> v(n); 
        for(long p = 0; p < n; p++){
            cin >> v[p];
        }
        vector<string>w(n / k,string(n / k, '0'));
        for(long row = 0; row < n; row += k){
            for(long col = 0; col < n; col += k){
                w[row / k][col / k] = v[row][col];
            }
        }

        for(long p = 0; p < w.size(); p++){
            cout << w[p] << endl;
        }
    }
    
    return 0;
}