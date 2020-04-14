#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i;
   cin>>n;
   for(i=0;i<n;i++)
   {
       int m,j;
       cin>>m;
       int a[m];
       for(j=0;j<m;j++)
       {
           cin>>a[j];
       }
       sort(a,a+m);
       int p=0,q=0;

       for(j=m-1;j>=0;j--)
       {
           if(a[j]==2048)
           {
               q++;
               cout<<"YES"<<endl;
               break;
           }
           else if(a[j]<2048)
           {
               p+=a[j];
               if(p==2048)
               {
                   q++;
                   cout<<"YES"<<endl;
                   break;
               }
           }

       }
       if(q!=1)
           {
               cout<<"No"<<endl;
           }
   }
   return 0;
}
