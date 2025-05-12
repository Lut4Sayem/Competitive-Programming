#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
	cin >> t;
	while(t--){
		double x,y, ans;
		cin >> x >> y;
		ans = ceil(y/2);
		while(ans*15 - y*4 < x){
			ans++;
		}
		cout << ans << endl;
	}
    
    return 0;
}