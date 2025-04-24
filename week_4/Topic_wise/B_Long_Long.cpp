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
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        bool negseg=false;
        int op=0;
        long long int sum=0;
        for(int i=0; i<=n; i++){
            if(i<n) sum+=abs(v[i]);
            if(negseg){
                if(v[i]>0 || i==n){
                    op++;
                    negseg=false;
                }
            }
            else{
                if(v[i]<0){
                    negseg=true;
                }
            }
        }
        cout<<sum<<" "<<op<<endl;
    }
    
    return 0;
}