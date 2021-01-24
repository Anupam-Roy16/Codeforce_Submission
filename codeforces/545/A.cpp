#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,p,j,n,m;
    cin>>n;
    int b[n];
    for(i=0;i<n;i++)
    {
        b[i]=0;
    }
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1)
            {
              b[i]=i+1;
            }
            else if(a[i][j]==2){
                b[j]=j+1;
            }
            else if(a[i][j]==3)
            {
                b[i]=i+1;
                b[j]=j+1;
            }
        }
    }
    int r=0;
    for(i=0;i<n;i++)
    {
        if(b[i]==0)
        {
            r++;
        }
    }
    cout<<r<<endl;
    int e=0;
    for(i=0;i<n;i++)
    {
        if(b[i]==0)
        {

            cout<<i+1;
            e++;
            if(e!=r)
            {
                cout<<" ";
            }
            else{
                cout<<endl;
            }
        }
    }

}
