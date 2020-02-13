#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,m,n,a,b;
    cin>>a>>b;
    l=2*a;
    m=5*a;
    n=8*a;
    if((l%b)==0)
    {
        l=l/b;
    }
    else{
        l=(l/b)+1;
    }
    if((m%b)==0)
    {
        m=m/b;
    }
    else{
        m=(m/b)+1;
    }
    if((n%b)==0)
    {
        n=n/b;
    }
    else{
        n=(n/b)+1;
    }
    cout<<l+m+n<<endl;
    return 0;
}
