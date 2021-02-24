#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    unsigned long long n,p,t,a,b,c,d=0,e;
    cin>>n>>p;
    unsigned long long w[n];
    for(i=0;i<n;i++)
    {
        cin>>w[i];
    }
    sort(w,w+n);
    for(i=1;i<n;i++)
    {
        t=w[i]-w[0];
        if(t%p==0)
        {
            d+=(t/p);
        }
        else{
                cout<<"-1"<<endl;
            return 0;
        }
    }
    cout<<d<<endl;


}




