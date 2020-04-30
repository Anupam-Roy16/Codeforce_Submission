#include<bits/stdc++.h>
using namespace std;
int main()
{
   int b,k,i,p=0,q=0;
   cin>>b>>k;
   int a[k];
   for(i=0;i<k;i++)
   {
       cin>>a[i];
       if((b%2)==1)
       {
           if((a[i]%2)==0)
           {
               p++;
           }
           else{
            q++;
           }
       }
       else{
        p++;
       }
   }
   if((b%2)==0)
   {
       if((a[k-1]%2)!=0)
       {q++;}

   }
   if((q%2)==0)
   {
       cout<<"even";
   }
   else{
    cout<<"odd";
   }
cout<<endl;

return 0;
}


