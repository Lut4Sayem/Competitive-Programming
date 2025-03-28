#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,sum=0;
    cin>>n;
    long long odd=INT_MAX;
    for(long long i=0; i<n; i++){
        long long val;
        cin>>val;
        sum+=val;
        if (val%2!=0) odd=min(odd,val);
    }
    if(sum%2!=0) cout<<sum-odd<<endl;
    else cout<<sum<<endl;
    return 0;
}