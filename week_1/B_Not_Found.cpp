#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
  if(s.size()==1){
        if(int(int(s[0])>97)){ 
            cout<<"a"<<endl;
            return 0;
        }
        else{
            cout<<char(int(s[0])+1)<<endl;
            return 0;
        }
  }
  else{
    if(s[0]!='a'){
        cout<<"a"<<endl;
        return 0;
    }
    long long int i=1;
    long int prev=s[0];
    long int now=s[1];
    while(true){
        
        if(now-prev>1){
            cout<<char(prev+1)<<endl;
            return 0;
        }
        i++;
        prev=now;
        if(i>=(long long int)s.size()) break;
        now=s[i];
    }
    if(s[s.size()-1]!='z'){
        cout<<"z"<<endl;
        return 0;
    }
    cout<<"None"<<endl;
  }
    return 0;
}