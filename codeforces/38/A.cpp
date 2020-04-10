#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,n,i,sum=0;
    cin>>n;
    int a[n-1];
    for(i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    cin>>b>>c;
    for(i=b;i<c;i++)
    {
        sum+=a[i-1];
    }
    cout<<sum<<endl;
    return 0;
}
