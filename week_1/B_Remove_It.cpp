#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,x;
    cin>>n>>x;
    for(long long int i=0; i<n; i++){
        long long int val;
        cin>>val;
        if (val!=x){
            cout<<val<<" ";
        }
    }
    return 0;
}
