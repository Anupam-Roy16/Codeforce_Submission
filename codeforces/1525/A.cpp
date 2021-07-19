#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,r,n,s;
    cin>>r;
    while(r--)
    {
        cin>>n;
        p=100-n;
        s=__gcd(p,n);
        cout<<(n/s)+(p/s)<<endl;
    }
}
