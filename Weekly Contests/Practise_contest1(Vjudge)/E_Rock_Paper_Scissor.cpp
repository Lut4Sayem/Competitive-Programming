#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        string chef,chefina;
        cin>>n>>chef>>chefina;
        int count_c=0,count_cf=0;
        for(int i=0; i<n; i++){
            if(chef[i]=='R' && chefina[i]=='S'){
                count_c++;
            }
            if(chef[i]=='S' && chefina[i]=='R'){
                count_cf++;
            }
            if(chef[i]=='S' && chefina[i]=='P'){
                count_c++;
            }
            if(chef[i]=='P' && chefina[i]=='S'){
                count_cf++;
            }
            if(chef[i]=='P' && chefina[i]=='R'){
                count_c++;
            }
            if(chef[i]=='R' && chefina[i]=='P'){
                count_cf++;
            }
        }
        if (count_c > count_cf) {
            cout << 0 << '\n';
        } else {
            int diff = count_cf - count_c + 1;
            cout << (diff + 1) / 2 << '\n';
        }
    }
    
    return 0;
}