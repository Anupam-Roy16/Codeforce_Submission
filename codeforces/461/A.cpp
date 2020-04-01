#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long q=0,n,p=0;
    int i;
    cin>>n;
     unsigned long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        p+=a[i];
    }
    if(n==1)
    {
        cout<<p<<endl;
    }
    else{
    sort(a,a+n);
 unsigned long long y=p;
    for(i=0;;i++)
    {


            q+=(a[i]+(p-a[i]));
            p-=a[i];

            if(p==a[n-1])
            {
                break;
            }

    }
    cout<<q+y<<endl;}
    return 0;
}
