#define ll long long int
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        ll final=0;
        priority_queue<ll>pq;
        for(int i=0; i<n; i++){
            if(v[i]==0){
                if(pq.empty()) continue;
                final+=pq.top();
                pq.pop();

            }
            else{
                pq.push(v[i]);
            }
        }
        cout<<final<<endl;

    }
    
    return 0;
}