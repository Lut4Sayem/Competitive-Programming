#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    long long numberofelements,numberofsum;
    cin>>numberofelements>>numberofsum;
    if(numberofelements>numberofsum ||(numberofelements%2==0&&numberofsum%2==1)){
        cout<<"NO"<<endl;
        continue;
    }
    else{
        cout<<"YES"<<endl;
        if(numberofelements%2==1){
            
            for(int i=1;i<numberofelements;i++){
                cout<<"1 ";
                numberofsum--;
            }
            cout<<numberofsum<<endl;
        }
        else{
            for(int i=1;i<numberofelements-1;i++){
                cout<<"1 ";
                numberofsum--;
            }
            cout<<numberofsum/2<<" "<<numberofsum/2<<endl;
        }
    }
    }
    return 0;
}