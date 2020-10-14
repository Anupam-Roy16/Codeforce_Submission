#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m,p=0;
    cin>>n>>m;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        p+=a[i];
    }
    if(p<=m)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
