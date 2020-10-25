#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,p,m,k,q,u,w;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        int a[m];
        for(j=0;j<m;j++)
        {
            cin>>a[j];
            if(a[j]==1)
            {
                w=j;
            }
        }
        for(j=0;j<m;j++)
        {
            if(a[j]==1)
            {
                break;
            }
        }
        int p=0;
        for(k=j+1;k<w;k++)
        {
            if(a[k]==0)
            {
                p++;
            }
        }
        cout<<p<<endl;

    }


}
