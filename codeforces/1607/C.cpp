#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,t,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long c=0,a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        b[0]=a[0];
        for(i=1;i<n;i++)
        {
            c+=b[i-1];
            b[i]=a[i]-c;
        }
        sort(b,b+n);
        cout<<b[n-1]<<endl;
    }
    return 0;
}
