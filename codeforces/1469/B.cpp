#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,j,k,i,p;
    cin>>p;
    for(i=0;i<p;i++)
    {
        cin>>n;
        int q=-101,r=-101,s=0,t=0;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            s+=a[j];
            if(s>q)
            {
                q=s;
            }
        }
        cin>>m;
        int b[m];
        for(j=0;j<m;j++)
        {
            cin>>b[j];
            t+=b[j];
            if(t>r)
            {
                r=t;
            }
        }
       if(q<0)
       {
           q=0;
       }
       if(r<0)
       {
           r=0;
       }
       cout<<q+r<<endl;
    }
    return 0;
}
