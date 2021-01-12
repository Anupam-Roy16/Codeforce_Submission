#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,k,i,p=0,q=0,j;
   cin>>n>>m>>k;
   int a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]==1)
       {
           p++;
       }
   }
   if(p>m)
   {
       q+=(p-m);
   }
   else{
    m-=p;
    k+=m;
   }
   if(k>(n-p))
   {
       cout<<(q+0)<<endl;
   }
   else{
    cout<<n-p-k+q<<endl;
   }
   return 0;
}

