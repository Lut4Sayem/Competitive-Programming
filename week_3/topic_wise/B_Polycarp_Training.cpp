#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    multiset<int>s;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    int ans=0,problems=1;
    while(!s.empty()){
        auto it=s.lower_bound(problems);
        if(it!=s.end()){
            ans++;
            s.erase(it);
            problems++;
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}