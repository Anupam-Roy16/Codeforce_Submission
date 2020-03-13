#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    char a[n][11];
    char b[m][11];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int p,q;
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>p;
        int x,z;
        x=p%n;
        z=p%m;
        if(x==0){x=n-1;}
        else{x--;}
        if(z==0){z=m-1;}
        else{z--;}
        cout<<a[x]<<b[z]<<endl;

    }

    return 0;
}
