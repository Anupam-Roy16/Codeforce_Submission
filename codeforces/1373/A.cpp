#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long a,b,p,s,n;
    int i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>p;
        if(a<p)
        {
            cout<<"1 ";
        }
        else{
            unsigned long long r,t=2*p;
            r=a*(b+1);
            if(r<t)
            {
                cout<<b+1<<" ";
            }
            else{
                cout<<"-1 ";
            }
        }
        if(p<a)
        {
            cout<<"1"<<endl;
        }
        else{
            unsigned long long r=2*b*a,t=2*p;
            if(t<r)
            {
                cout<<b<<endl;
            }
        else{
            cout<<"-1"<<endl;
        }
    }
    }

}
