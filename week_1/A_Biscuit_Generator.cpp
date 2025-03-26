#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,t,count=0,i=1;
    cin>>a>>b>>t;
    while(i*a<=t){
        count+=b;
        i++;
    }
    cout<<count<<endl;
    return 0;
}