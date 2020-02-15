#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long l=a/d;
        long long m=l/b;
        cout<<l+(m*c)<<endl;
    }
    return 0;
}
