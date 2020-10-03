#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,m,r,p=0,q=0;
    cin>>t;
    int a[t];
    for(i=0;i<t;i++)
    {
        cin>>a[i];
        if(a[i]==2)
        {
            p++;
        }
        else if(a[i]==1)
        {
            q++;
        }
    }
    if(p==q)
    {
        cout<<p<<endl;
    }
    else if(p>q)
    {
        cout<<q<<endl;
    }
    else{
        q-=p;
        q/=3;
        cout<<q+p<<endl;
    }

}
