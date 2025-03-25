#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<a+b<<endl;
    }
    else{
        int x=max(a,b);
        cout<<x+(x-1)<<endl;
    }
    
    return 0;
}