#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int m,q,i,w=0,p=0,j,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            p++;
        }
    }
    if(n<=2)
    {
        cout<<p<<endl;
        return 0;
    }
    for(i=n-1;i>=2;i--)
    {
        if((a[i]==1)&&(a[i-1]==0)&&(a[i-2]==0))
        {
            w++;
        }
        else if((a[i]==1)&&(a[i-1]==0)&&(a[i-2]==1))
        {
            w++;
        }
    }
    if((a[0]==0)&&(a[1]==0))
    {
        w--;
    }
    if(w<0)
    {
        w=0;
    }
    cout<<((p-w)+(2*w))<<endl;
    return 0;
}





















