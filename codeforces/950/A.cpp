#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(((a==0)&&(c==0))||((b==0)&&(c==0)))
    {
        cout<<"0"<<endl;
    }
    else if(a==b)
    {
        cout<<2*(a+(c/2))<<endl;
    }
    else if(a>b)
    {
        int l=a-b;
        if(l==c)
        {cout<<2*a<<endl;}
        else if(l>c)
        {
            cout<<2*(b+c)<<endl;
        }
        else
        {
            cout<<2*(a+((c-l)/2))<<endl;
        }
    }
    else if(b>a)
    {
        int l=b-a;
        if(l==c)
        {cout<<2*b<<endl;}
        else if(l>c)
        {
            cout<<2*(a+c)<<endl;
        }
        else
        {
            cout<<2*(b+((c-l)/2))<<endl;
        }
    }
    return 0;
}
