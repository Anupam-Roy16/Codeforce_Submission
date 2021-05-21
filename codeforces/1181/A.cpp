#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long  a,b,c,d,n,m,p,i;
    cin>>n>>m>>p;
    a=n/p;
    b=m/p;
    c=n%p;
    d=m%p;
    if((c+d)>=p)
    {
        i=max(c,d);
        cout<<a+b+1<<" "<<p-i<<endl;
    }
    else{
        cout<<a+b<<" "<<"0"<<endl;
    }
	return 0;
}
