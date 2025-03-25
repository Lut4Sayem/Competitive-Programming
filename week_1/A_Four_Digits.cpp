#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    string num=to_string(x);
    while(num.size()<4){
        num='0'+num;
    }
    cout<<num<<endl;
    return 0;
}