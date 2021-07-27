#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long p,q,n,i,j,m;
    cin>>p>>q>>n;
    if(n%p==0||n%q==0)
    {
        cout<<"Yes"<<endl;
    }
    else{
        j=max(p,q);
        m=min(p,q);
        int y=n/j;
        int u=n%j;
        while(y>=1)
        {
            if(u%m==0)
            {
                cout<<"Yes"<<endl;
                return 0;
            }
            else{
                u+=j;
            }
            y--;
        }
       cout<<"No"<<endl;
    }
}
