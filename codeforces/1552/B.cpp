#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p,k,n,i,j;
    cin>>n;
    while(n--)
    {
        cin>>p;
        int a[p][5];
        for(i=0;i<p;i++)
        {
            for(j=0;j<5;j++)
            {
                cin>>a[i][j];
            }
        }
        int r=0;
        for(i=1;i<p;i++)
        {
            int q=0;
            if(a[i][0]<a[r][0])
            {
                q++;
            }
            if(a[i][1]<a[r][1])
            {
                q++;
            }
            if(a[i][2]<a[r][2])
            {
                q++;
            }
            if(a[i][3]<a[r][3])
            {
                q++;
            }
            if(a[i][4]<a[r][4])
            {
                q++;
            }
            if(q>=3)
            {
                r=i;
            }
        }
        int y=0;
        for(i=0;i<p;i++)
        {
            if(i==r)
            {
                continue;
            }
            int q=0;
            if(a[i][0]>a[r][0])
            {
                q++;
            }
            if(a[i][1]>a[r][1])
            {
                q++;
            }
            if(a[i][2]>a[r][2])
            {
                q++;
            }
            if(a[i][3]>a[r][3])
            {
                q++;
            }
            if(a[i][4]>a[r][4])
            {
                q++;
            }
            if(q<3)
            {
                y++;
                cout<<"-1"<<endl;
                break;
            }
        }
        if(y==0)
        {
            cout<<r+1<<endl;
        }
    }
}
