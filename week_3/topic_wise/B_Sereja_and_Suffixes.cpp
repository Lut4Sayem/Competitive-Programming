#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    set<int>s;
    int arr[n];
    for(int i=n; i>=1; i--){
        s.insert(v[i]);
        arr[i]=s.size(); 
    }
    while(m--){
        int pos;
        cin>>pos;
        cout<<arr[pos]<<endl;
    }
    
    return 0;
}