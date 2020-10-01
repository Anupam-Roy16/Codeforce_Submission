#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,p,q=1,k;
   cin>>n>>k;
   int a[n];

   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(i=1;i<n;i++)
   {
       p=abs(a[i]-a[i-1]);
       if(p<=k)
       {
           q++;
       }
       else{
        q=1;
       }
   }
   cout<<q<<endl;
}
