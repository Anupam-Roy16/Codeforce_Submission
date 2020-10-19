#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p=0,r=0,i,j,q=0;
    cin>>n;
    int a[n][n];
    int c[n],d[n];
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            cin>>a[j][i];
            q+=a[j][i];
        }
        c[j]=q;
        q=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            r+=a[j][i];
        }
        d[i]=r;
        r=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(d[i]>c[j])
            {
                p++;
            }
        }
    }
    cout<<p<<endl;




    return 0;
}
