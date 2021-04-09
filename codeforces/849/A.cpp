#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,i,j,p=0,q;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   if(n%2==0)
   {
       cout<<"NO"<<endl;
   }
   else if((a[0]%2==0)||(a[n-1]%2==0))
   {
       cout<<"NO"<<endl;
   }
   else{
    cout<<"YES"<<endl;
   }
   return 0;
}
