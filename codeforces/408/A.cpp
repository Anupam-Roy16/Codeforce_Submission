#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t=1000000,i,n,j,m;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }

   for(i=0;i<n;i++)
   {
       int p=0;
       int b[a[i]];
       for(j=0;j<a[i];j++)
       {
           cin>>b[j];
           p+=b[j];
       }
       p*=5;
       p+=(a[i]*15);
       if(p<t)
       {
           t=p;
       }
   }
   cout<<t<<endl;
   return 0;
}

