#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int a[2*n],b[n+1];

    for(i=0;i<(2*n);i++)
    {
        cin>>a[i];
        if(i<=n)
        {
            b[i]=0;
        }
    }
    int p=0,m=0;
     for(i=0;i<(2*n);i++)
    {
        b[a[i]]++;
        if(b[a[i]]==1)
        {
            p++;
            if(m<p)
            {
                m=p;
            }
        }
        else{
            p--;
        }
    }
    cout<<m<<endl;

    return 0;
}

