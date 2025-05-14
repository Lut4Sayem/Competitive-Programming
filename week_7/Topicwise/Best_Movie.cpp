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
        int final_cost=INT_MAX;
        while(n--){
            int imdb,cost;
            cin>>imdb>>cost;
            if(imdb>=7){
                final_cost=min(cost,final_cost);
            }
        }
        if(final_cost!=INT_MAX){
            cout<<final_cost<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    
    return 0;
}