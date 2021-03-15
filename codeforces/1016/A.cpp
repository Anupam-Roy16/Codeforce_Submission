#include<bits/stdc++.h>
using namespace std;
int main()
{
   int p=0,k,r,s,n,i,j,m;
   cin>>n>>m;
   int a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(i=0;i<n;i++)
   {
       if(i>0)
       {
           if(k<=a[i])
           {
               p++;
               a[i]-=k;
           }
           else{
            cout<<"0";
            if(i!=n-1)
       {
           cout<<" ";
       }
       else{
        cout<<endl;
       }
       k-=a[i];
       continue;
           }
       }

       p+=a[i]/m;
       k=a[i]%m;
       k=m-k;
       cout<<p;
       p=0;
       if(i!=n-1)
       {
           cout<<" ";
       }
       else{
        cout<<endl;
       }
   }
}
