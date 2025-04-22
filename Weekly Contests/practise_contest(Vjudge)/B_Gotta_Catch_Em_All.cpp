#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,normal,master;
        cin>>n>>normal>>master;
        vector<int> s;
        int normal_sum=0;
        int master_sum=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            s.push_back(x);
            normal_sum+=x*normal;

        }
        sort(s.begin(),s.end(),greater<int>());
        for(auto it:s){
            int new_sum=normal_sum-(it*normal)+master;
            if(new_sum<normal_sum){
                normal_sum=new_sum;
                // s.erase(it);
            }
            else{
                break;
            }
        }
        cout<<normal_sum<<endl;
    }
    return 0;
}