#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r=0,t,i,n,k=500,q,j;
    vector<int>s;
    vector<int>p;
    for(i=0;i<5;i++)
    {
        cin>>t;
        s.push_back(t);
    }
    for(i=0;i<5;i++)
    {
        cin>>t;
        p.push_back(t);
    }
    cin>>q>>j;
    for(i=0;i<5;i++)
    {

        n=3*(k/10);
        t=(250-s[i])*(k/250);
        t-=(50*p[i]);
        r+=max(n,t);
        k+=500;
    }
    r+=(q*100);
    r-=(j*50);
    cout<<r<<endl;
    return 0;
}
