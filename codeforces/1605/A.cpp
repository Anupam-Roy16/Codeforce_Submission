#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,i;
    cin>>t;
    long long d,a,b,c;
    while(t--)
    {
        cin>>a>>b>>c;
        a+=c;
        b*=2;
        d=abs(a-b);
        if(d%3==0)
        {
            cout<<"0"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
    return 0;
}
