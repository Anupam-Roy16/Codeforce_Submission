#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,m,k,p,r,q=0;
    cin>>n>>m;
    int i;
    if(n<m)
    {
        for(i=1;i<=n;i++)
        {
            k=i/5;
            p=(m+i)/5;
            p-=k;
            q+=p;

        }
        cout<<q<<endl;
    }
    else{
        for(i=1;i<=m;i++)
        {
            k=i/5;
            p=(n+i)/5;
            p-=k;
            q+=p;

        }
         cout<<q<<endl;
    }


    return 0;
}
