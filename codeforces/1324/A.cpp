#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,n,p,i,r,j;
    cin>>p;
    for(j=0;j<p;j++)
    {
    t=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            t++;
        }
    }
    if((t==0)||(t==n))
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}
