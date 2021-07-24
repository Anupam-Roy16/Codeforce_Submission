#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ul;
ul count_factor(ul num)
{
    ul i,m_count=1;
    for(i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            ul count=0;
            while(num%i==0)
            {
                count++;
                num/=i;
            }
            m_count*=(count+1);
        }
    }
    if(num>1)
    {
        m_count*=2;
    }
    return m_count;

}
ul kth_divisor_search(ul n,ul k,ul r)
{
    ul p=1,q;
    for(ul i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            q=n/i;
            if(p==k)
            {
                return i;
                break;
            }
            else if(r==k)
            {
                return q;
                break;
            }
            else{
                p++;
                r--;
            }
        }
    }
}
int main()
{
    ul n,q,m,y;
    cin>>n;
    cin>>m;
    q=count_factor(n);
    if(m>q)
    {
        cout<<"-1"<<endl;
    }
    else
    {
    cout<<kth_divisor_search(n,m,q)<<endl;
    }
    return 0;
}
