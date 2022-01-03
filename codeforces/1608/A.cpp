#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ul;
bool primetest(ul n)
{
    if(n<2)
    {
        return 0;
    }
    else
    {
    for(ul i=2;i*i<=n;i++)
    {
        if((n%i)==0)
        {
           return 0;
        }
    }
    }
    return 1;
}
int main()//  ata diye n porjonto prime ber hbe kintu complexity O(nsqrt(n))
{
    int q,i,n,p=0;
    cin>>n;
    while(n--)
    {
        cin>>q;
        p=0;
        for(i=1;;i++)
        {
            if(primetest(i)==1)
            {
                p++;
                cout<<i;
                if(p==q)
                {
                    cout<<endl;
                    break;
                }
                else{
                    cout<<" ";
                }
            }
        }
    }

}
