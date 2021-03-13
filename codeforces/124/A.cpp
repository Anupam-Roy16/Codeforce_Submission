#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,p=0,t;
    cin>>n>>a>>b;
    j=n;
    while(j--)
    {
        t=n-1-a;
        if((t<=b)&&(t>=0))
        {

            p++;

        }
a++;
    }
    cout<<p<<endl;
}
