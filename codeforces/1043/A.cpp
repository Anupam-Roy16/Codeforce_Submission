#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,n,i,sum=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    for(j=0;;j++)
    {
        int l=0;
    for(i=0;i<n;i++)
    {
        l+=a[n-1]+j-a[i];
    }
    if(l>sum)
    {
        cout<<a[n-1]+j<<endl;
        break;
    }
    }

    return 0;
}
