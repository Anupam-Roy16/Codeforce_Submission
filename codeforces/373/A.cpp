#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,k,i,p=0,q=0,j;
   cin>>n;
   char a[4][4];
   for(i=0;i<4;i++)
   {
       for(j=0;j<4;j++)
       {
           cin>>a[i][j];
       }
   }
   for(k=1;k<10;k++){
   p=0;
   for(i=0;i<4;i++)
   {
       for(j=0;j<4;j++)
       {
       if(((int)a[i][j]-48)==k)
       {
           p++;
       }
       }
   }
   if(p>(2*n))
   {
       cout<<"NO"<<endl;
       return 0;
   }

   }
   cout<<"YES"<<endl;

   return 0;
}

