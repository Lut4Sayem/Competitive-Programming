#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,w;
        cin>>n>>w;
        multiset<long long> ms;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            ms.insert(x);
        }
        int height=1,left=w;
        while(!ms.empty()){
            auto it=ms.upper_bound(left);
            if(it==ms.begin()){
                height++;
                left=w;
            }
            else{
                it--;
                int val=*it;
                left-=val;
                ms.erase(it);

            }

        }
        cout<<height<<endl;

    }
    
    return 0;
}