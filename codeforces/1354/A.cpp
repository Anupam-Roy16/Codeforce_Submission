#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,p,t;
    int j;
    cin>>p;
    for(j=0;j<p;j++)
    {
       cin>>a>>b>>c>>d;
       if(b>=a)
       {
           cout<<b<<endl;
       }
       else{
        t=a-b;
        long long f=c;
        c-=d;
       
        if(c<=0)
        {
            cout<<"-1"<<endl;
        }
        else{
            if(t%c==0)
            {
                t/=c;
                t*=f;
                cout<<t+b<<endl;
            }
            else{
                t/=c;
                t++;
                t*=f;
            cout<<(t+b)<<endl;
        }
       }
    }
    }
    return 0;
}
