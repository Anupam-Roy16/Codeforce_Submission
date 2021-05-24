#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d;
    if(c>a)
    {
        cout<<"-1"<<endl;

    return 0;

    }
    else{
        a-=c;
    }
    if(c>b)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    else{
    b-=c;
    }
    a+=(b+c);
    if(d<=a)
    {
        cout<<"-1"<<endl;
    }
    else{
        cout<<d-a<<endl;
    }
    return 0;
}
