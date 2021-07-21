#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ul;
ul bigmod2(ul a,ul b,ul c)// ata dieyo hoi but power besi hole hoina
{
    ul ans=1;
    for(ul i=1;i<=b;i++)
    {
        ans=((ans%c)*(a%c))%c;
    }
    return ans%c;
}
ul bigmod1(ul a,ul b,ul c)// akhane (a^b)%c
{
    if(b==0)
    {
        return 1;
    }
    else if(b%2==0)
    {
        ul p=bigmod1(a,b/2,c);
        return (p*p)%c;
    }
    else{
        ul q=bigmod1(a,b-1,c);
        ul w=a%c;
        return (q*w)%c;
    }
}
int main()
{
    ul a,b,n,i,m;
    cin>>n;
    cout<<bigmod1(1378,n,10)<<endl;
}
