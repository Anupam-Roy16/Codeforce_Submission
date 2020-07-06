#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,p,q;
    cin>>n>>m;
    char a[n+1];
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='G')
        {
            p=i;
        }
        if(a[i]=='T')
        {
            q=i;
        }
    }
    if(p<q)
    {
        for(i=p;i<=q;i+=m)
        {
            if(a[i]=='#')
            {
                cout<<"NO"<<endl;
                return 0;
            }
            if(a[i]=='T')
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
    }
    else{
        for(i=p;i>=q;i-=m)
        {
            if(a[i]=='#')
            {
                cout<<"NO"<<endl;
                return 0;
            }
            if(a[i]=='T')
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
    }

}
