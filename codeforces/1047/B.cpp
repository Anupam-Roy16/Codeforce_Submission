#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    unsigned long long d,s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        unsigned long long c,a,b;
        cin>>a>>b;
        c=a+b;
        if(c>=s)
        {
            s=c;

        }
        if(i==0){s=c;}

    }
    cout<<s<<endl;
    return 0;
}
