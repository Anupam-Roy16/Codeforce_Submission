#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long c,n,a,b,d;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<"0 0"<<endl;
            continue;
        }
        c=abs(a-b);
        d=c;
        a%=c;
        c-=a;
        b=min(a,c);
        cout<<d<<" "<<b<<endl;
    }
}
