#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c,d;
    cin>>n;
    int a[n],b[n],p=1000000;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i!=0)
        {
            b[i-1]=abs(a[i]-a[i-1]);
            if(b[i-1]<p)
            {
               p=b[i-1];
               c=i+1;
               d=i;
            }
        }


    }
    b[i-1]=abs(a[0]-a[n-1]);
    if(b[i-1]<p)
    {
        c=0+1;
        d=n;
    }
    cout<<c<<" "<<d<<endl;




}
