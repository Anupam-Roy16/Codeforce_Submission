#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long p=0;
    int q,m,i,j,n;
    cin>>n;
    unsigned long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        p+=a[i];
    }
    cin>>m;
    sort(a,a+n);
    for(i=0;i<m;i++)
    {
        cin>>q;
        cout<<p-a[n-q]<<endl;
    }


}
