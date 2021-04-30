#include<bits/stdc++.h>
using namespace std;
int main ()
{
    unsigned long long  x,y,z,n,m,l,j,t=0,k;
    cin>>x>>y>>z;
    int i;
    vector<unsigned long long> p;
    for(i=0;i<x;i++)
    {
        cin>>n;
        p.push_back(n);
    }
    sort(p.rbegin(),p.rend());
    z++;
    k=y%z;
    m=y/z;
    n=m;
    z--;
    m*=z;
    m+=k;
    cout<<m*p[0]+n*p[1]<<endl;
    return 0;
}





















