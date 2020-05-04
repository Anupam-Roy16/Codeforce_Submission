#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int a[n],b[601];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<=600;i++)
    {
        b[i]=0;
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            b[a[i]]++;
        }
    }
    int p=0;
    for(i=1;i<=600;i++)
    {
        if(b[i]!=0)
        {
            p++;
        }
    }
    cout<<p<<endl;

    return 0;
}

