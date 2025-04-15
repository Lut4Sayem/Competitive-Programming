#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int c1= 0,c2 =0;
    for (int i= 0; i<n; i++) {
        if (i % 2 == 0) {
            if (a[i]=='0') c1++;
            if (b[i]=='0') c2++;
        } else {
            if (b[i]=='0') c1++;
            if (a[i]=='0') c2++;
        }
    }

    int need1 = (n+1)/2; 
    int need2 = n/2;

    if (c1 >= need1 && c2 >= need2)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';

  }
    
    return 0;
}
