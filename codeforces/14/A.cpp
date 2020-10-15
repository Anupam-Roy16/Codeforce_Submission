#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p=0,q=0,t,n,r,w,m,h,i,j;
    cin>>n>>m;
    char a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
            if((p==0)&&(a[i][j]=='*'))
            {
                h=i;
                p++;
            }
            if(a[i][j]=='*')
            {
                r=i;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if((q==0)&&(a[j][i]=='*'))
            {
                q++;
                t=i;

            }
            if(a[j][i]=='*')
            {
                w=i;

            }
        }

    }
    for(i=h;i<=r;i++)
    {
        for(j=t;j<=w;j++)
        {
            cout<<a[i][j];
            if(j==w)
            {
                cout<<endl;
            }
        }
    }


    return 0;
}
