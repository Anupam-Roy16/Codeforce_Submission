#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long j,r,u,t,n,m,p,k;
    cin>>r;
    int i;
    for(i=0;i<r;i++)
    {
        cin>>n>>m>>k;
        n/=k;
        if(n>=m)
        {
            cout<<m<<endl;
        }
        else{
            m-=n;
            t=m;
            m/=(k-1);
            if(m==0)
            {
                cout<<n-1<<endl;

            }
            else{
                    if(t%(k-1)!=0)

                    {m++;}
            cout<<n-m<<endl;
        }
        }
    }

}
