#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,i,j;
    cin>>n>>m;
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%1d",&a[i][j]);
        }
    }
    int b[n],c[n];
    for(i=0;i<n;i++)
    {
        c[i]=0;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[j]=a[j][i];
        }
        sort(b,b+n);
        for(j=0;j<n;j++)
        {
            if(b[n-1]==a[j][i])
            {
               c[j]++;
            }
        }
    }
    int p=0;
    for(i=0;i<n;i++)
    {
        if(c[i]!=0)
        {
            p++;
        }
    }
    cout<<p<<endl;
    return 0;
}
