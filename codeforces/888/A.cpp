#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,m,r,p=0,q=0;
    cin>>t;
    int a[t];
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    i=1;
    while(i<t-1)
    {
        if((a[i]>a[i-1])&&(a[i]>a[i+1]))
        {
            p++;
        }
        else if((a[i]<a[i-1])&&(a[i]<a[i+1]))
        {
            p++;
        }
        i++;
    }
    cout<<p<<endl;
}
