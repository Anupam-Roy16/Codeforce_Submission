#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,p=0,i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            p=abs(a[i]-a[i+1]);
            q=abs(a[i]-a[n-1]);
            cout<<p<<" "<<q<<endl;
        }
        else if(i==(n-1))
        {
            p=abs(a[n-2]-a[i]);
            q=abs(a[0]-a[i]);
            cout<<p<<" "<<q<<endl;
        }
        else{
            int t=abs(a[i]-a[i+1]);
            int w=abs(a[i]-a[i-1]);
            t=min(t,w);
            p=abs(a[0]-a[i]);
            q=abs(a[n-1]-a[i]);
            p=max(p,q);
            cout<<t<<" "<<p<<endl;
        }
    }


    return 0;
}
