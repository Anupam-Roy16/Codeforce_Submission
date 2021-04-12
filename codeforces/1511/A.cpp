#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,j,p,b,c,d,t,k;
   cin>>t;
   for(i=0;i<t;i++)
   {
       cin>>n;
       int a[n];
       p=0;
       for(j=0;j<n;j++)
       {
           cin>>a[j];
           if((a[j]==1)||(a[j]==3))
           {
               p++;
           }
       }
       cout<<p<<endl;

   }

   return 0;
}
