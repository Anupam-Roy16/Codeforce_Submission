#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b%c==0)
    {
        b/=c;
    }
    else{
        b/=c;
        b++;
    }
    b*=a;
    if(b%d==0)
    {
        b/=d;
        cout<<b<<endl;
    }
    else{
        b/=d;
        b++;
        cout<<b<<endl;
    }



    return 0;
}
