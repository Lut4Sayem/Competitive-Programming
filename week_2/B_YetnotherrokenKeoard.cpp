#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string word;
        int small=0,capital=0;
        cin>>word;
        string res;
        for(auto c: string(word.rbegin(),word.rend())){
            if (c=='b') small++;
            else if(c=='B') capital++;
            else if(islower(c)){
                if(small>0){
                    small--;
                }
                else res.push_back(c);
            }
            else if(isupper(c)){
                if(capital>0){
                    capital--;
                }
                else res.push_back(c);
            }
            
        }
        reverse(res.begin(),res.end());
        cout<<res<<endl;
    }
    return 0;
}