#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,q=0,r=0,j,p=0;
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
   j=n-p;
   for(i=0;i<n;i++)
   {
       if(a[i]==0)
       {
           q++;
           if(q==p)
           {
               cout<<i+1<<endl;
               return 0;
           }
       }
       else{
        r++;
        if(r==j)
        {
            cout<<i+1<<endl;
            return 0;
        }
       }
   }

}
