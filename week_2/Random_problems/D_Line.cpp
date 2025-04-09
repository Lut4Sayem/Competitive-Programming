#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long n,total=0;
        string s;
        cin>>n>>s;
        for(long long i=0; i<n; i++){
            if(s[i]=='L') total+=i;
            else total+=(n-i-1);
        }

        vector<long long> flipped;
        for(long long i=0; i<n; i++){
            if(s[i]=='L'){
                if(((n-i-1)-i)>0){
                    flipped.push_back(n-i-1-i);
                }
                else flipped.push_back(0);
            }
            else{
                if((i-(n-i-1))>0){
                    flipped.push_back(i-(n-i-1));
                }
                else flipped.push_back(0);
            }
        }
        sort(flipped.begin(),flipped.end());
        reverse(flipped.begin(),flipped.end());

        for(long long k=1; k<=n; k++){
            if(flipped[k-1]>0){
                total+=flipped[k-1];
            }
            cout<<total<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}