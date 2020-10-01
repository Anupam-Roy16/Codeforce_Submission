#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,p,q=0;
   cin>>n;
   int a[n];

   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   sort(a,a+n);
   for(i=0;i<n-1;i++)
   {
       p=abs(a[i]-a[i+1]);
       if(p!=1)
       {
           q+=(p-1);
       }
   }
   cout<<q<<endl;
}
