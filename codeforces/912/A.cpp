#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,m,x,y,z,p=0;
    cin>>n>>m>>x>>y>>z;
     unsigned long long k=(2*x)+(y);
    if(k>n)
    {
        p+=k-n;
    }
     unsigned long long  r=3*z+y;
    if(r>m)
    {
        p+=(r-m);
    }
    cout<<p<<endl;
    return 0;
}
