#include <bits/stdc++.h>
using namespace std;
/*typedef unsigned long long ul;
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
int main()
{
    unsigned long long n,i,p=0,q=0,r,t,j;
    cin>>n;
    while(n--)
    {
        cin>>t;
        j=count_factor(t);
        if(j==3)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
    return 0;

}
*/
int main()
{
    int i,n,p,q=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>0)
        {
            if(__gcd(a[i],a[i-1])!=1)
            {
                q++;
            }
        }
    }
    cout<<q<<endl;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<a[i];
        }
        else if(__gcd(a[i],a[i-1])!=1)
        {
            cout<<" 1 "<<a[i];
        }
        else{
            cout<<" "<<a[i];
        }

    }
    cout<<endl;
    return 0;
}
