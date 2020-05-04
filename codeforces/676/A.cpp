#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(((a[0]==1)&&(a[n-1]==n))||((a[0]==n)&&(a[n-1]==1)))
    {
        cout<<n-1<<endl;
    }
    else{
            int p,q;
        for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            p=i;
        }
        else if(a[i]==n)
        {
            q=i;
        }
    }
    int r=abs(p-q);
    if(p<q)
    {
        if(abs(0-p)<=abs(n-1-q))
        {
           cout<<r+abs(n-1-q);
        }
        else{
            cout<<r+abs(0-p);
        }
    }
    else{
        if(abs(n-1-p)<=abs(q-0))
        {
           cout<<r+abs(q-0);
        }
        else{
            cout<<r+abs(n-1-p);
        }
    }
    }
    return 0;
}

