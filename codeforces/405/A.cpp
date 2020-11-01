#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,j,m;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(i=n-1;i>0;i--)
   {
       for(j=i-1;j>=0;j--)
       {
           if(a[i]<a[j])
           {
               m=(a[j]-a[i]);
               a[i]+=m;
               a[j]-=m;
           }
       }
   }
   for(i=0;i<n;i++)
   {
       cout<<a[i];
       if(i!=(n-1))
       {
           cout<<" ";
       }
       else{
        cout<<endl;
       }
   }
}
