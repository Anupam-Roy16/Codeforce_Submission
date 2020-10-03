#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    a=abs(a-c);
    b=abs(b-d);
    if(a==b)
    {
        cout<<a<<endl;
    }
    else if(a>b)
    {
        a-=b;
        cout<<a+b<<endl;
    }
    else{
        b-=a;
        cout<<a+b<<endl;
    }
    return 0;
}
