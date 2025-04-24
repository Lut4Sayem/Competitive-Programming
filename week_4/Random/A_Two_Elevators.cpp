#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a<=b and c>b)
	    {
	        cout<<"1"<<endl;
	        continue;
	    }	

        int bb= abs(c-b)+abs(c-1);
        int aa=a-1;
        if(aa<bb)
        cout<<"1"<<endl;
        else if(bb<aa)
        cout<<"2"<<endl;
        else 
        cout<<"3"<<endl;
	 
    }
    return 0;
}