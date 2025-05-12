#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for (auto& i : v)
        {
            cin >> i;
        }
        bool isit = false;
        ll sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if(v[i]) isit = true;
            if(isit && v[i] == 0)
                sum++;
            else
                sum += v[i];
        }
        cout << sum << endl;
    }
    
    return 0;
}