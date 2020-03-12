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
    if((n%2)==0)
    {
        int l=(n/2)-1;
        cout<<a[l]<<endl;
    }
    else{
        int l=(n/2);
        cout<<a[l]<<endl;
    }
    return 0;
}
