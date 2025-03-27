#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    int count=0;
    for(long long int i=0; i<s1.size(); i++){
        if (s1[i]!=s2[i]) count++;
    }
    cout<<count;
    return 0;
}