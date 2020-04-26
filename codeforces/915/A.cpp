#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,n,m,p=0;
   cin>>n>>m;
   int a[n],b[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       if((m%a[i])==0)
       {
           b[p]=m/a[i];
           p++;
       }
   }
   sort(b,b+p);
   cout<<b[0]<<endl;

   return 0;
}
