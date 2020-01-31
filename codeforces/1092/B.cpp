#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,s=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i=i+2)
    {
        s+=abs(a[i]-a[i+1]);
    }
    cout<<s<<endl;
    return 0;
}
