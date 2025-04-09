#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<string,int>freq;
    stack<string> st;
    while(n--){
        string s;
        cin>>s;
        freq[s]++;
        st.push(s);
    }
    while(!st.empty()){
        auto x=st.top();
        auto it=freq.find(x);
        if(it != freq.end()){
            cout<<x<<endl;
            freq.erase(x);
        }
        st.pop();
    }
    return 0;
}