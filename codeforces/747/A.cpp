#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,l;
    cin>>n;
    l=sqrt(n);
    for(i=l;;i++)
    {
        if(n%i==0)
        {
            int t=n/i;
            if(i>t)
            {
                cout<<t<<" "<<i<<endl;
            }
            else{
                cout<<i<<" "<<t<<endl;
            }
            break;
        }
    }
    return 0;
}
