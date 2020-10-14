#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m,q=0,p=0;
    cin>>n>>m;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int r=0,s=0;
    for(i=0;i<n;i++)
    {
        r+=b[i];
        int t=a[i]-(m*r);
        if(t<0)
        {
            p+=0;
        }
        else{
            p+=t;
        }
    }
     for(i=n-1;i>=0;i--)
    {
        s+=b[i];
        int t=a[i]-(m*s);
        if(t<0)
        {
            q+=0;
        }
        else{
            q+=t;
        }
    }

    if(p>q)
    {
        cout<<"Limak"<<endl;
    }
    else if(p<q)
    {
        cout<<"Radewoosh"<<endl;
    }
    else{
        cout<<"Tie"<<endl;
    }

    return 0;
}
