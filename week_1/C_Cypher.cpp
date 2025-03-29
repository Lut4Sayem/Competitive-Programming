#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int final[n];
        for(int i=0; i<n; i++)
            cin>>final[i];
        for (int i=0; i<n; i++){
            int op;
            string s;
            cin>>op>>s;
            for (int j=0; j<op; j++){
                if (s[j]=='U'){
                    if (final[i]==0){
                        final[i]=9;
                    }
                    else final[i]--;
                }
                else if(s[j]=='D'){
                    if(final[i]==9){
                        final[i]=0;
                    }
                    else final[i]++;
                }
            }
        }
        for(int i=0; i<n; i++){
            cout<<final[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}