#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        p+=a[i];
    }
    for(i=1;;i+=(n+1))
    {
        if(i>=p)
        {
            i-=(n+1);
            break;
        }
    }

    int b[8];
    for(int j=0;j<8;j++)
    {
        b[j]=i;
        i+=(n+1);
    }
    int r=0;
    for(int j=p+1;j<p+6;j++)
    {
        int q=0;
        for(i=0;i<8;i++)
        {
        if(j==b[i])
        {
            q++;

        }
        }
        if(q==0)
        {
            r++;
        }
    }
    cout<<r<<endl;
}
