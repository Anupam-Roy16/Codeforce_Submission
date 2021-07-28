#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ul;
bool primetest2(ul n)//complexity O(sqrt(n)) ; kono sokhar divisor akti sqrt(n) ar moddhe thakle oprtti ar baire thake;
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

int main()
{
    unsigned long long i,p=0,q=0,r,t,j;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>t;
        double k=sqrt(t);
        k=(ul)k;
        if(k==1)
        {
            cout<<"NO"<<endl;
        }
        else if(k*k==t)
        {
            if(primetest2(k)==1)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;

}
