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
        if(i!=0)
        {
            cout<<a[i]+a[i-1]<<" ";
        }
    }
    cout<<a[n-1]<<endl;

    return 0;
}
