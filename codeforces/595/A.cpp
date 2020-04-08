#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,p=0;
    cin>>n>>m;
    int a[2*m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<(2*m);j++)
        {
            cin>>a[j];
        }
        for(j=0;j<(2*m);j+=2)
        {
            if((a[j]==1)||(a[j+1]==1))
            {
                p++;
            }
        }
    }
    cout<<p<<endl;
    return 0;
}
