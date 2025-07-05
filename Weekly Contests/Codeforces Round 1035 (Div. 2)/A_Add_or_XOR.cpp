#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll a, b, x, y;
        cin >> a >> b >> x >> y;

        if (a == b) {
            cout << 0 << '\n';
            continue;
        }

        const int high_bound = 200;
        vector<ll> dist(high_bound + 1, LLONG_MAX);
        priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;

        dist[a] = 0;
        pq.push({0, a});

        while (!pq.empty()) {
            auto [cost, u] = pq.top();
            pq.pop();
            if (cost != dist[u]) 
                continue;

            if (u + 1 <= high_bound) {
                ll new_cost = cost + x;
                if (new_cost < dist[u + 1]) {
                    dist[u + 1] = new_cost;
                    pq.push({new_cost, u + 1});
                }
            }

            int v2 = u ^ 1;
            if (v2 >= 0 && v2 <= high_bound) {
                ll new_cost = cost + y;
                if (new_cost < dist[v2]) {
                    dist[v2] = new_cost;
                    pq.push({new_cost, v2});
                }
            }
        }

        if (dist[b] == LLONG_MAX) {
            cout << -1 << '\n';
        } else {
            cout << dist[b] << '\n';
        }
    }
    return 0;
}