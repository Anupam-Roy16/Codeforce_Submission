#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,p,q;
    cin>>n;
    char a[n][20];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    p=strlen(a[0]);
    for(j=0;j<p;j++)
    {
        int t=0;
        for(i=1;i<n;i++)
        {
            if(a[i][j]!=a[0][j])
            {
                t++;
                break;
            }
        }
        if(t==1)
        {
            break;
        }
    }
    cout<<j<<endl;
}
