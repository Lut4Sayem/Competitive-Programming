#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b) cout<<-1<<endl;
    else{
        for(int i=a;i<=b;i++){
            if(i%c==0){
                cout<<i<<endl;
                return 0;
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}