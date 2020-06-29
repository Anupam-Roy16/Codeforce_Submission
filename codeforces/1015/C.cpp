#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long q=0,p=0,t=0,m,n,c,d;
    cin>>n>>m;
    int i;
    unsigned long long  a[n];
    for(i=0;i<n;i++)
    {
        cin>>c>>d;
        a[i]=c-d;
        p+=d;
        t+=c;
    }
    if(p>m)
    {
        cout<<"-1"<<endl;
    }
    else{

    sort(a,a+n);
    if(t<=m)
    {
        cout<<"0"<<endl;
    }
    else{
    for(i=n-1;i>=0;i--)
    {

        t-=a[i];
        if(t<=m)
        {
            cout<<n-i<<endl;
            break;
        }
    }
    }
    }

}
