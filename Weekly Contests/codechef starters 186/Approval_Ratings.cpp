#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        vector<int>ratings(5);
        int avg=0;
        for(int i=0; i<5; i++){
            cin>>ratings[i];
            avg+=ratings[i];
        }
        sort(ratings.begin(),ratings.end());
        int coin=0;
        if(avg>=35){
            cout<<0<<endl;
            continue;
        }
        else{
            for(int i=0; i<5 && avg<35; i++){
                avg+=(10-ratings[i]);
                coin+=100;
            }
            cout<<coin<<endl;
        }
        
    }
    
    return 0;
}