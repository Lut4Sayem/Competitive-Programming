#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n,m;
    cin>>n>>m;
    vector<long long int> a(n);
    vector<long long int> b(m);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    long long int i=0,j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            ans.push_back(a[i]);
            i++;
        }
        else{
            ans.push_back(b[j]);
            j++;
        }
    }
    while(i<n){
        ans.push_back(a[i]);
        i++;
    }
    while(j<m){
        ans.push_back(b[j]);
        j++;
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
    
    return 0;
}