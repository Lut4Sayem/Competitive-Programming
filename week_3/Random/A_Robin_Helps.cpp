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
        int count=0;
        int total_gold=0;

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x>=k){
                total_gold+=x;
            }
            else if(x==0 && total_gold>0){
                total_gold--;
                count++;
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}