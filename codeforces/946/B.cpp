#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long p,q,n,i,j,m;
    cin>>p>>q;
    while(1)
    {
        if(p==0||q==0)
        {
            break;
        }
        if(p>=(2*q))
        {
            p=p%(2*q);
        }
        else if(q>=(2*p)){
             q=q%(2*p);
        }
        else{
            break;
        }
    }
    cout<<p<<" "<<q<<endl;
}
