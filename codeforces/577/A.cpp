#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ul;

int main()
{
    int c,i=1,j=0,n;
    cin>>n>>c;
    while(i<=n)
    {
        if(c%i==0)
        {
            if((c/i)<=n)
            {
                j++;
            }
        }
        i++;
    }
    cout<<j<<endl;
}
