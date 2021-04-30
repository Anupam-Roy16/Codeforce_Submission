#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y,n,m,i,l,j,t=0,p,q,k;
    cin>>n;
    int a[100][100]={0};
    for(i=0;i<n;i++)
    {
        cin>>x>>y>>p>>q;
        for(j=y-1;j<q;j++)
        {
            for(k=x-1;k<p;k++)
            {
                a[j][k]++;
            }
        }
    }
    for(i=0;i<100;i++)
    {
        for(j=0;j<100;j++)
        {
            t+=a[i][j];
        }
    }
    cout<<t<<endl;
    return 0;
}






















