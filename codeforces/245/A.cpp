#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,n,a,b,c,p=0,q=0,r=0,s=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(a==1)
        {
            p++;
            r+=b;
        }
        else{
            q++;
            s+=b;
        }
    }
    p*=10;
    p/=2;
    q*=10;
    q/=2;
    if(r>=p)
    {
        cout<<"LIVE"<<endl;
    }
    else{
        cout<<"DEAD"<<endl;
    }
    if(s>=q)
    {
    cout<<"LIVE"<<endl;
    }
    else{
        cout<<"DEAD"<<endl;
    }
    return 0;

}
