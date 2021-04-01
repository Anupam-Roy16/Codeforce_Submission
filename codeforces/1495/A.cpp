#include<bits/stdc++.h>
using namespace std;
int main()
{
   int p,k,r,s,n,i,j,m,t;
   cin>>t;
   for(i=0;i<t;i++)
   {
       cin>>n;
       double a[n],b[n];
       n*=2;
       s=0,r=0;
       double y=0;
       for(j=0;j<n;j++)
       {

           cin>>p>>k;
           if(p==0)
           {
               if(k<0)
               {
                   b[s]=k*-1;
               }
               else{
                b[s]=k;
               }
               s++;
           }
           else{
               if(p<0)
               {
                   a[r]=p*-1;
               }
               else{
                a[r]=p;
               }
               r++;
           }
       }
       n/=2;
       sort(a,a+n);
       sort(b,b+n);
       for(j=0;j<n;j++)
       {
           y+=sqrt((a[j]*a[j])+(b[j]*b[j]));
       }
       printf("%.15lf\n",y);
   }
   return 0;
}
