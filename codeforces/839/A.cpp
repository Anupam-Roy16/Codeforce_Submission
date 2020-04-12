#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    int n,q=0,k,p=0,i,w=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]>8)
        {
         p+=8;
         q+=a[i]-8;
         if(p>=k)
         {

             break;
         }
        }
        else{
            if(q>=(8-a[i]))
            {
                q-=(8-a[i]);
                p+=8;
                 if(p>=k)
         {

             break;
         }
            }
            else{
                p+=(a[i]+q);
                q=0;
                 if(p>=k)
         {
                break;
         }
            }
        }

    }

    if(i==n)
    {
        cout<<"-1"<<endl;
    }
    else{
    cout<<i+1<<endl;
}    return 0;
}
