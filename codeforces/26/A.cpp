#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ul;
bool primefactorization(int m)
{
    int i,p=0;
    for(i=2;i*i<=m;i++)
    {
        if(m%i==0)
        {
            int count=0;
            while(m%i==0)
            {
                m/=i;
                count++;
            }
            p++;
        }
    }
    if(m>1)
    {
        p++;
    }
    if(p==2)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int a=0,b=1,c,i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        c=primefactorization(i);
        if(c==1)
        {
            a++;
        }
    }
    cout<<a<<endl;


}
