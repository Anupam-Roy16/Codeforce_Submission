#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ul;

int main()
{
    int c,d,t,p,q;
    cin>>t;
    while(t--)
    {
        cin>>c>>d;
        p=abs(c-d);
        if((c==0)&&(d==0))
        {
            cout<<"0"<<endl;
        }
        else if(c==d)
        {
            cout<<"1"<<endl;
        }
        else if(p%2==0)
        {
            cout<<"2"<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}


