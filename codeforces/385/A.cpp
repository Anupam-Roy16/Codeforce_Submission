#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,j,m;
   cin>>n>>m;
   int a[n],b[n-1];

   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(i=0;i<n-1;i++)
   {
       b[i]=a[i]-a[i+1]-m;
   }
   sort(b,b+n-1);
   if(b[n-2]<=0)
   {
       cout<<"0"<<endl;
   }
   else{
    cout<<b[n-2]<<endl;
   }
   return 0;
}
