#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,p=0;
    cin>>n;
    for(i=1;i<=(n/2);i++)
    {
        if((n%i)==0)
        {
            p++;
        }
    }
    cout<<p<<endl;
    return 0;
}
