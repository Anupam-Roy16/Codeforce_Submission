#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,p,q;
    cin>>n>>p>>q;
    int c[n], a[p],b[q];
    for(i=0;i<n;i++)
    {
        c[i]=-1;

    }
    for(i=0;i<p;i++)
    {
        cin>>a[i];
        c[a[i]-1]=0;

    }
    for(i=0;i<q;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        if(c[i]==0)
        {
            cout<<"1";
        }
        else{
            cout<<"2";
        }
        if(i!=(n-1))
        {
            cout<<" ";
        }
        else{
            cout<<endl;
        }
    }

}
