#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
   unsigned long long a[n],p[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        p[i]=a[i];
    }
    sort(a,a+n);
    int m,b,c,d,j;

    for(i=1;i<n;i++)
    {
        a[i]+=a[i-1];
        p[i]+=p[i-1];
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>b>>c>>d;
        if(b==1)
        {
           {if(c!=1)
            {cout<<p[d-1]-p[c-2]<<endl;}
else{cout<<p[d-1]<<endl;}
        }
        }
        else{if(c!=1)
            {cout<<a[d-1]-a[c-2]<<endl;}
else{cout<<a[d-1]<<endl;}
    }

}
return 0;}
