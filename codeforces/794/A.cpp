#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,k,p=0,t;
    cin>>n>>m>>k>>t;
    int a[t];
    for(i=0;i<t;i++)
    {
        cin>>a[i];
        if(((m<a[i])&&(a[i]<=n))||((n<a[i])&&(a[i]<k)))
        {
            p++;
        }
    }
    cout<<p<<endl;

    return 0;
}
