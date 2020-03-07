#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=n-1;i>=0;i--)
    {
        if(a[i]<0)
        {
            cout<<a[i]<<endl;
            break;
        }

        int b=sqrt(a[i]);
        if((b*b)!=a[i])
        {
            cout<<a[i]<<endl;
            break;
        }

    }

    return 0;
}
