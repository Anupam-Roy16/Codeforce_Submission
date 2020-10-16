#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,t, n,i,j,p=0;
    cin>>n>>m;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        p+=a[i];
    }
    n--;
    n*=10;
    n+=p;
    if(n>m)
    {
        cout<<"-1"<<endl;
    }
    else{
        int r=m-n;
        r/=5;
        n-=p;
        n/=5;
        cout<<n+r<<endl;

    }

    return 0;
}
