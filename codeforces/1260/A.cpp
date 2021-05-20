#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p,q,r,t,z,s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p>>q;
        if(p>=q)
        {
            cout<<q<<endl;
        }
        else{
            t=q/p;
            if(q%p==0)
            {
                cout<<p*t*t<<endl;
            }
            else{
                r=q%p;
                p-=r;
                z=t*t;
                z*=p;
                s=r*(t+1)*(t+1);
                cout<<z+s<<endl;
            }

        }
    }
}
