#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,j,p=0,q=0,t;
   cin>>t;
   for(j=0;j<t;j++)
   {cin>>n;
   int a[n],b[n];
   p=0;q=0;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       b[i]=a[i];
   }
   sort(a,a+n);
   for(i=0;i<n;i++)
   {
       if(a[0]==a[i])
       {
           p++;
       }
       else if(a[i]==a[n-1])
       {
           q++;
       }
   }
   if(p==1)
   {
       for(i=0;i<n;i++)
       {
           if(a[0]==b[i])
           {
               break;
           }
       }
       cout<<i+1<<endl;
   }
   else{
    for(i=0;i<n;i++)
       {
           if(a[n-1]==b[i])
           {
               break;
           }
       }
       cout<<i+1<<endl;
   }
   }
   return 0;
}
