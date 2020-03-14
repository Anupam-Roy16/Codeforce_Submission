#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,p=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=k)
        {
            p++;
        }
        else{
            break;
        }
    }

    if(p!=n)
    {
    for(i=n-1;;i--)
    {
        if(a[i]<=k)
        {
            p++;
        }
        else{
            cout<<p<<endl;
            break;
        }
    }
    }
    else{
        cout<<n<<endl;
    }
    return 0;
}
