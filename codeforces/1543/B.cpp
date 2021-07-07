#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long c,n,a,b,d;
    cin>>n;
    while(n--)
    {
       cin>>d;
       c=d;
       long long p=0;
       vector<long long>v;
       while(d--)
       {
           cin>>a;
           v.push_back(a);
           p+=a;
       }
       p%=c;
       cout<<p*(c-p)<<endl;
    }
}
