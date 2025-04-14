#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int count=0;
        int n,k,l;
        cin>>n>>k>>l;
        vector<int>possible_length_v;
        while(n--){
            int length,language;
            cin>>length>>language;
            if(language==l){
                possible_length_v.push_back(length);
            }
        }
        if(possible_length_v.size() < k){
            cout<<-1 << endl;
            continue;
        }
        sort(possible_length_v.begin(),possible_length_v.end(),greater<int>());
        for(int i=0; i<k; i++){
            count+=possible_length_v[i];
        }
        cout<<count<<endl;
    }
    
    return 0;
}