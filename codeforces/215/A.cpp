#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,k,i,p=0,q=0,j;
   cin>>n;
   int  a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   cin>>m;
   int b[m];
   for(i=0;i<m;i++)
   {
       cin>>b[i];
   }
   int c[2500];
   for(i=0;i<2500;i++)
   {
       c[i]=0;
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
   {
       if(b[j]%a[i]==0)
       {
           c[p]=b[j]/a[i];
           p++;
       }
   }
   }
   sort(c,c+2500);
   int t=0;
    for(j=2500-2;j>=0;j--)
   {
       if(c[j]==c[j+1])
       {
           t++;
       }
       else{
        break;
       }
   }
   cout<<1+t<<endl;
   return 0;
}

