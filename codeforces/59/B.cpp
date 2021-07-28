#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ul;
int main()
{
    int n,m,i,q=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        q+=a[i];
    }
    if(q%2!=0)
    {
        cout<<q<<endl;
    }
    else
    {
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                break;
            }
        }
        if(i==n)
        {
            cout<<"0"<<endl;
        }
        else{
            q-=a[i];
            cout<<q<<endl;
        }

    }

    return 0;

}
