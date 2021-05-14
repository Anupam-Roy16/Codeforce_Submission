#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int n,p=0;
   vector<int>a;
   for(int i=0;i<6;i++)
   {
       cin>>n;
       a.push_back(n);
       p+=a[i];
   }
   if(p%2!=0)
   {
       cout<<"NO"<<endl;
   }
   else if((a[0]+a[1]+a[2])==p/2)
   {
       cout<<"YES"<<endl;
   }
   else if((a[0]+a[1]+a[3])==p/2)
   {
       cout<<"YES"<<endl;
   }
   else if((a[0]+a[1]+a[4])==p/2)
   {
       cout<<"YES"<<endl;
   }
   else if((a[0]+a[1]+a[5])==p/2)
   {
       cout<<"YES"<<endl;
   }
   else if((a[0]+a[2]+a[3])==p/2)
   {
       cout<<"YES"<<endl;
   }
   else if((a[0]+a[2]+a[4])==p/2)
   {
       cout<<"YES"<<endl;
   }
   else if((a[0]+a[2]+a[5])==p/2)
   {
       cout<<"YES"<<endl;
   }
   else if((a[0]+a[3]+a[4])==p/2)
   {
       cout<<"YES"<<endl;
   }
   else if((a[0]+a[3]+a[5])==p/2)
   {
       cout<<"YES"<<endl;
   }
   else if((a[0]+a[4]+a[5])==p/2)
   {
       cout<<"YES"<<endl;
   }
   else if((a[1]+a[2]+a[3])==p/2)
   {
       cout<<"YES"<<endl;
   }
   else if((a[1]+a[2]+a[4])==p/2)
   {cout<<"YES"<<endl;

   }
   else if((a[1]+a[2]+a[5])==p/2)
   {
       cout<<"YES"<<endl;
   }
   else if((a[1]+a[3]+a[4])==p/2)
   {
       cout<<"YES"<<endl;
   }
   else if((a[1]+a[3]+a[5])==p/2)
   {
       cout<<"YES"<<endl;
   }
   else if((a[1]+a[4]+a[5])==p/2)
   {
       cout<<"YES"<<endl;
   }
   else if((a[2]+a[3]+a[4])==p/2)
   {
       cout<<"YES"<<endl;
   }
   else if((a[2]+a[4]+a[5])==p/2)
   {
       cout<<"YES"<<endl;
   }
   else if((a[2]+a[3]+a[5])==p/2)
   {
       cout<<"YES"<<endl;
   }
   else if((a[3]+a[4]+a[5])==p/2)
   {
       cout<<"YES"<<endl;
   }

   else{
    cout<<"NO"<<endl;
   }



   return 0;
}





















