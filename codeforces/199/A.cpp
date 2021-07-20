#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ul;
int main()
{
    int a=0,b=1,c,i,j,n;
    cin>>n;
    if(n==0)
    {
        cout<<"0 0 0"<<endl;
        return 0;
    }
    else if(n==1)
    {
         cout<<"0 0 1"<<endl;
        return 0;
    }
    while(1)
    {
        c=a+b;
        if(c==n)
        {
            break;
        }
        a=b;
        b=c;

    }
    j=b;
    n=a;
    a=0,b=1;
    while(1)
    {
        c=a+b;
        if(c==n)
        {
            break;
        }
        a=b;
        b=c;

    }
    cout<<a<<" "<<b<<" "<<j<<endl;
}
