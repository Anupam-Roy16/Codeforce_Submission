#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long i,j,t=0,n,m=0,p,k;
    cin>>n>>k;
    j=n+k;
    t=(-4)*(-2)*j;
    t+=9;
    t=sqrt(t);
    p=t;
    t-=3;
    p+=3;
    p*=-1;
    p/=2;
    int r,s;
    r=n-p;
    t/=2;

    s=n-t;
    //cout<<s<<" "<<r<<endl;
    if((s>=0)&&(s<=n))
    {
        cout<<s<<endl;
    }
    else{
        cout<<r<<endl;
    }

}
