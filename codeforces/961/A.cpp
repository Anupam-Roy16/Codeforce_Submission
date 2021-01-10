#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j,p=0,t=100000;
    cin>>n>>m;
    int a[m],b[n+1];
    for(i=0;i<n+1;i++)
    {
        b[i]=0;
    }
    for(i=0;i<m;i++)
    {
        cin>>a[i];
        b[a[i]]=1;
    }
    for(i=1;i<n+1;i++)
    {
        if(b[i]==0)
        {
            cout<<"0"<<endl;
            return 0;
        }
    }
   sort(a,a+m);
   if(n==1)
   {
       cout<<m<<endl;
       return 0;
   }
    for(i=0;i<m-1;i++)
    {
        if(a[i]==a[i+1])
        {
            p++;
            if(i==m-2)
            {

                p++;
                 if(t>p)
            {
                t=p;
                p=0;
            }
            }
        }
        else{
            p++;
            if(i==m-2)
            {
                t=1;
                break;
            }
            if(t>p)
            {
                t=p;

            }
            p=0;
        }

    }
    cout<<t<<endl;
}
