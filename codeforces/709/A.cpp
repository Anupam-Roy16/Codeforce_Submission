#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,b,d,sum=0,p=0;
    cin>>n>>b>>d;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=b)
        {
            sum+=a[i];
        }
        if(sum>d)
        {
            p++;
            sum=0;
        }
    }
    cout<<p<<endl;
    return 0;

}
