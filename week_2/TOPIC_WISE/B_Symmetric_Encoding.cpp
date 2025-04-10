#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        string st;
        vector<char> s;
        cin>>n>>st;
        map<char,int>mp;
        for(char x:st){
            if(mp.find(x)== mp.end()){
                s.push_back(x);
            }
            mp[x]++;
        }
        sort(s.begin(),s.end());
        map<char,char>letter_mapping;
        int i=0,j=s.size()-1;
        while(i<=j){
            letter_mapping[s[i]]=s[j];
            letter_mapping[s[j]]=s[i];
            i++;
            j--;
        }
        for(auto x:st){
            cout<<letter_mapping[x];
        }
        cout<<endl;

        
    }
    
    return 0;
}