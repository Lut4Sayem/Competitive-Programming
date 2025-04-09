#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        map<char,int>mp;
        int max_time=0;
        string s;
        cin>>s;
        char prev='#';
        for(char ch:s){
            if(prev==ch){
                max_time+=1;
            }
            else max_time+=2;
            mp[ch]++;
            prev=ch;
        }

        char alphabet[26] = {
            'a', 'b', 'c', 'd', 'e', 'f', 'g',
            'h', 'i', 'j', 'k', 'l', 'm', 'n',
            'o', 'p', 'q', 'r', 's', 't', 'u',
            'v', 'w', 'x', 'y', 'z'
        };
        char my_ch;
        for(int i=0; i<26; i++){
            if(mp[alphabet[i]]==0){
                my_ch=alphabet[i];
                break;
            }
        }
        char pre='#';
        string mystr;
        bool done=false;
        
        for(char x:s){
            if(x==pre & done==false){
                mystr+=my_ch;
                mystr+=x;
                done=true;
            }
            else mystr+=x;
            pre=x;
        }
        if(!done){
            mystr+=my_ch;
        }
        cout<<mystr<<endl;

    }
    return 0;
}