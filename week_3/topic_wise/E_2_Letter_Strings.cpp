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
        vector<string> strings(n);
        map<char,long long> first;
        map<char,long long> second;
        map<string,long long> string_occ;

        for(int i=0; i<n; i++){
            cin>>strings[i];
            first[strings[i][0]]++;
            second[strings[i][1]]++;
            string_occ[strings[i]]++;
        }
        long long count=0;

        for(int i=0; i<n; i++){
            long long x=max((long long)0,first[strings[i][0]]-string_occ[strings[i]]);
            count+=x;
            x=max((long long)0,second[strings[i][1]]-string_occ[strings[i]]);
            count+=x;
            if(first[strings[i][0]]>0) first[strings[i][0]]--;
            if(second[strings[i][1]]>0) second[strings[i][1]]--;
            if(string_occ[strings[i]]>0) string_occ[strings[i]]--;
        }
        cout<<count<<endl;
    }
    
    return 0;
}