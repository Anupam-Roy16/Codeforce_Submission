#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j,i,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        int b[n-1],p=0;
        for(j=1;j<n;j++)
        {
           b[p]=a[j]-a[j-1];
           p++;
        }
        sort(b,b+n-1);
        cout<<b[0]<<endl;
    }

}
