#include <bits/stdc++.h>
using namespace std;
int main()
{
    int j,m,n,i;
    cin>>n>>m;
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int t=10000;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
    {
        if(a[i]==b[j])
        {
            if(a[i]<t)
            {
                t=a[i];
            }
            break;
        }
    }
    }
    if(t!=10000)
    {
        cout<<t<<endl;
        return 0;
    }

    sort(a,a+n);
    sort(b,b+m);
    if(a[0]<b[0])
    {

        cout<<a[0]<<b[0]<<endl;
    }
    else{
        cout<<b[0]<<a[0]<<endl;
    }
}
