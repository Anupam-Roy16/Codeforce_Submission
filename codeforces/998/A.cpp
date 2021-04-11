#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,j,p=0,q,b,c,d,t,k;
   cin>>t;
   int a[t];
   for(i=0;i<t;i++)
   {
       cin>>a[i];
       p+=a[i];
   }
   if(t==1)
   {
       cout<<"-1"<<endl;
        return 0;
   }
   else if(p%2!=0)
   {
       cout<<"1"<<endl<<"1"<<endl;
        return 0;
   }
   else{
   p/=2;
   for(i=0;i<t;i++)
   {
       if(a[i]!=p)
       {
           cout<<"1"<<endl<<i+1<<endl;
           return 0;
       }
   }
   }
   cout<<"-1"<<endl;
   return 0;
}
