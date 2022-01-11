#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,r,n,i,a,b,c;

    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        p=2*b;
        p-=c;
        if(p%a==0)
        {
            p/=a;
            if(p>0)
            {
                cout<<"YES"<<endl;
                continue;
            }
        }
        q=a+c;
        r=2*b;
        if(q%r==0)
        {
            q/=r;
            if(q>0)
            {
                cout<<"YES"<<endl;
                 continue;
            }
        }
        r-=a;
        if(r%c==0)
        {
            r/=c;
            if(r>0)
            {
                 cout<<"YES"<<endl;
                  continue;
            }
        }
        cout<<"NO"<<endl;
    }
}


