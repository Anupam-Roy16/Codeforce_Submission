#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long w,n,p,q;
    cin>>n>>p;
    if(p<=n+1)
    {if(p%2!=0)
    {
        p--;
        cout<<p/2<<endl;
    }
    else{
        p/=2;
        cout<<p-1<<endl;
    }
    }
    else if(p<(2*n))
    {
        q=n;
        n+=2;
        p-=n;
        q-=p;
        p=q;
        if(p%2!=0)
    {
        p--;
        cout<<p/2<<endl;
    }
    else{
        p/=2;
        cout<<p-1<<endl;
    }
    }
    else{
        cout<<"0"<<endl;
    }
	return 0;
}
