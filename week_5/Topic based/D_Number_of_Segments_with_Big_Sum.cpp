#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, s;
    cin >> n >> s;
    vector<long long> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long l = 0, r = 0, sum = 0, count = 0;

    for(int i=0; i<n; i++){
        sum+=a[r];
        while(sum>=s){
            count+=(n-r);
            sum-=a[l];
            l++;
        }
        r++;
    }

    cout << count << "\n";
    return 0;
}
