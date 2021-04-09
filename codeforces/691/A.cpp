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
       if(a[i]==0)
       {
           p++;
       }
   }
   if((n==1))
   {
       if(p==1)
       {
           cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
       }
   }
   else if((p>1)||(p==0))
   {
       cout<<"NO"<<endl;
   }
   else{
    cout<<"YES"<<endl;
   }
   return 0;
}
