#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,k,p=0;
    cin>>n>>m>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    n-=m;
    for(i=0;i<n;i++)
    {
        p+=a[i];
    }
    p+=(m*k);
    cout<<p<<endl;
    return 0;
}
