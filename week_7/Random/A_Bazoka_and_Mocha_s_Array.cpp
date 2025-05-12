#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        vector<ll> b(n), c;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b.begin(), b.end());
        int index = n;
        for (ll i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                index = i;
            }
        }
        for (int i = index; i < n; i++)
        {
            c.push_back(a[i]);
        }
        for (int i = 0; i < index; i++)
        {
            c.push_back(a[i]);
        }
        int p = 0;
        for (int i = 0; i < n; i++)
        {
            if (c[i] != b[i])
            {
                cout << "NO" << endl;
                p = 1;
                break;
            }
        }
        if (!p)
            cout << "YES" << endl;
    }
}


