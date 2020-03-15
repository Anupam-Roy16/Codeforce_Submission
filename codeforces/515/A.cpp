#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<0)a*=-1;
    if(b<0)b*=-1;
    int l=c-(a+b);
    if(l<0){cout<<"NO"<<endl;}
    else if((l%2)==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
