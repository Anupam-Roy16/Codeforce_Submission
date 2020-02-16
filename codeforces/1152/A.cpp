#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,p=0,q=0,r=0,s=0;
    cin>>n>>m;
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if((a[i]%2)==0)
        {
            p++;
        }
        else{
            q++;
        }
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
        if((b[i]%2)==0)
        {
            r++;
        }
        else{
            s++;
        }
    }
    int sum=0;
    if(p>s)
    {
        sum+=s;
    }
    else{
        sum+=p;
    }
    if(q<r)
    {
        sum+=q;
    }
    else{
        sum+=r;
    }
    cout<<sum<<endl;
    return 0;
}
