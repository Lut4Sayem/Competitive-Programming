#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int ser=0,dima=0,i=1;

    while(!v.empty()){
        if(i%2!=0){
            if (v.front()>v.back()){
                ser+=v.front();
                v.erase(v.begin());
            }
            else{
                ser+=v.back();
                v.pop_back();
            }
            i++;
        }
        else{
            if (v.front()>v.back()){
                dima+=v.front();
                v.erase(v.begin());
            }
            else{
                dima+=v.back();
                v.pop_back();
            }
            i++;
        }
    }
    cout<<ser<< " " <<dima<<'\n';
    
    return 0;
}