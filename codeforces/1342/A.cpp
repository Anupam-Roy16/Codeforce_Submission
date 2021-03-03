#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long j,r,u,t,n,m,p,k;
    cin>>r;
    int i;
    for(i=0;i<r;i++)
    {
        cin>>p>>k>>n>>m;
        t=p+k;
        t*=n;

        u=abs(p-k);

        u*=n;

        j=min(p,k);
        u+=(j*m);

        cout<<min(u,t)<<endl;
    }

}
