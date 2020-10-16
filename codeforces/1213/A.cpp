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
        if(a[i]%2==0)
        {
            p++;
        }
    }
    q=n-p;
    if(q<p)
    {
        cout<<q<<endl;
    }
    else{
        cout<<p<<endl;
    }


    return 0;
}
