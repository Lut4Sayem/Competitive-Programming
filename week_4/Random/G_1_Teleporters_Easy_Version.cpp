#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        long long n, c;
        cin >> n >> c;
        vector<long long> cost(n);
        for(long long i = 0; i < n; i++){
            long long ai;
            cin >> ai;
            cost[i] = ai + i + 1;
        }
        sort(cost.begin(), cost.end());
        long long sum = 0;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(sum + cost[i] <= c){
                sum += cost[i];
                cnt++;
            } else {
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
