#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,x,y,z,p,q,r;
    cin>>x>>y>>z>>p>>q>>r;
    a=abs(x-y);
    c=a*p;
    b=a*q;
    b+=(3*r);
    b+=(q*abs(x-z));
   
    if(b<=c)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
