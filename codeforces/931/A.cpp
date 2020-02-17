#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    n=abs(n-t);

    if((n%2)==0)
    {
        n=n/2;
        cout<<2*((n*(n+1))/2)<<endl;
    }
    else{
            n=n/2;
        cout<<2*((n*(n+1))/2)+(n+1)<<endl;
    }

    return 0;
}
