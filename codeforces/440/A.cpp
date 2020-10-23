#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,m=0,k,t,w,x,y,e,r;
    int i;
    cin>>n;
    int a[n];
    for(i=0;i<n-1;i++)
    {
        cin>>a[i];
        m+=a[i];
    }
    t=n*(n+1);
    t/=2;
    cout<<t-m<<endl;




}
