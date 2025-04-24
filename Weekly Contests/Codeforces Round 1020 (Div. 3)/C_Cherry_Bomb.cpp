#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a;
        vector<int> b;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            b.push_back(x);
        }
        bool done=false;
        int val=-1;
        for(int i = 0; i < n; i++) {
            if (b[i] != -1) {
                int x = a[i] + b[i];
                if (val == -1) val = x;
                if (x != val) {
                    cout << 0 << endl;
                    done = true;
                    break;
                }
            }
        }
        
        if(!done){
            int mx_st=0;
            int min_end=INT_MAX;
            for(int i=0; i<n; i++){
                if(b[i]==-1){
                    mx_st=max(mx_st,a[i]);
                    min_end=min(min_end,a[i]+k);
                }
            }

            if (val!=-1) {
                if(val>=mx_st && val<=min_end){
                    cout<<1<<endl;
                }
                else{
                    cout<<0 <<endl;
                }
            }
            else{
                int ans=max(0,min_end-mx_st+1);
                cout<<ans<<endl;
            }

        }
    }
    
    return 0;
}