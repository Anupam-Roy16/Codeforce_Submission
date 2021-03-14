#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,i,u,j=0,p,t=0,k,f;
    cin>>p>>u;
    int a=p,b=u;
    for(i=0;;)
    {
        int y=i;
        k=1;
        while(y--)
        {
            k*=10;
        }
        f=p%10;
        if(f!=0)
        {
            i++;
        }
        //cout<<f<<" "<<k<<endl;
        n+=(f*k);
        p/=10;
        if(p==0)
        {
            break;
        }
    }

    for(i=0;;)
    {
        int y=i;
        k=1;
        while(y--)
        {
            k*=10;
        }
        f=u%10;
        if(f!=0)
        {
            i++;
        }
        n+=(f*k);
        u/=10;
        if(u==0)
        {
            break;
        }
    }
    p=a+b;

    for(i=0;;)
    {
        int y=i;
        k=1;
        while(y--)
        {
            k*=10;
        }
        f=p%10;
         if(f!=0)
        {
            i++;
        }
        j+=(f*k);
        p/=10;
        if(p==0)
        {
            break;
        }
    }

    if(n==j)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
