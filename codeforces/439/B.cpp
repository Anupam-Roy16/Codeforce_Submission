#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i;
   unsigned long long n,m,sum=0;
   cin>>n>>m;
   unsigned long long a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   sort(a,a+i);
   for(i=0;i<n;i++)
   {

       sum+=(a[i]*m);
       if(m!=1)
       {
           m--;
       }
   }
   cout<<sum<<endl;
   return 0;
}
