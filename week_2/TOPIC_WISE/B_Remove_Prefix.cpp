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
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int end=0;
        bool dup=false;
        map<int,int> mp;
        for(int i=n-1; i>-1;i--){
            if(mp.find(arr[i])!=mp.end()){
                end=i;
                dup=true;
                break;
            }
            mp[arr[i]]++;
        }
        if(dup){
            end++;
        }
        cout<<end<<endl;
    }
    
    return 0;
}