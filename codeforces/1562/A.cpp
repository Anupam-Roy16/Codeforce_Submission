#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long i=1,c,d,r,s,t,p,q=0;
    cin>>t;
    while(t--)
    {
        cin>>c>>d;
        if(d%2==0)
        {
            p=(d/2)+1;
             if(p<c)
            {
                cout<<d%c<<endl;
            }
            else{
                cout<<d%p<<endl;
            }
        }
        else{
            p=d/2;
            p++;
            if(p<c)
            {
                cout<<d%c<<endl;
            }
            else{
                cout<<d%p<<endl;
            }
        }

    }
    return 0;
}
