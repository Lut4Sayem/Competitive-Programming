#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    int t,i,j,n,cur;
    ll ar[1001];
    ll w[1001];
    cin >> t;
    while(t--){
        ll total=200,ans=0,cnt;
        ans = 0;
        while(total--) ar[total]=0;
        cin >> n;
        for(i=0;i<n;i++) 
            cin >> w[i];
        sort(w,w+n);
 
        for(ll k=1;k<101;k++){
            i=0,j=n-1,cnt=0;
            while(i<j){
                if(w[i]+w[j]==k){
                    i++,j--;
                    cnt++;
                }
                else if(w[i]+w[j]<k) i++;
                else j--;
            }
            if(ans<cnt) ans=cnt;
        }
        cout << ans;
        cout << endl;
    }
 
}