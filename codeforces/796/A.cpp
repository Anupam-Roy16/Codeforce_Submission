#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[n],i,j;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int p=10000;
    for(i=m-2;i>=0;i--)
    {
        if(a[i]!=0)
        {
            if(a[i]<=k)
            {
                p=i;
                break;
            }
        }
    }

    int q=100000;
    for(i=m;i<n;i++)
    {
        if(a[i]!=0)
        {
            if(a[i]<=k)
            {
                q=i;
                break;
            }
        }
    }
    if(p==10000)
    {
        cout<<(q-(m-1))*10<<endl;
    }
    else if(q==100000){
        cout<<(m-1-p)*10<<endl;
    }
    else{
            int l,t;
    l=q-m+1;
    t=m-1-p;
        if(l>t)
        {
            cout<<t*10<<endl;
        }
        else{
            cout<<l*10<<endl;
        }
    }
    return 0;
}
