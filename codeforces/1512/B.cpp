#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,j,p,q,b,c,d,t,k;
   cin>>t;
   for(i=0;i<t;i++)
   {
   cin>>n;
   char a[n][n];
   p=0;
   for(j=0;j<n;j++)
   {
       for(k=0;k<n;k++)
       {

           cin>>a[j][k];
           if((a[j][k]=='*')&&(p==0))
           {
               q=j;
               b=k;
               p++;
           }
           else if(a[j][k]=='*'){
               c=j;
               d=k;
           }

       }
   }
   if(b==d)
   {
       if(b!=0)
       {
           a[q][0]='*';
           a[c][0]='*';
       }
       else{
           a[q][b+1]='*';
           a[c][b+1]='*';
       }
   }
   else if(q==c)
   {
       if(q!=0)
       {
           a[0][b]='*';
           a[0][d]='*';
       }
       else{
           a[q+1][b]='*';
           a[q+1][d]='*';
       }
   }
   else{

           a[q][d]='*';
           a[c][b]='*';
   }

   for(j=0;j<n;j++)
   {
       for(k=0;k<n;k++)
       {
           cout<<a[j][k];
       }
       cout<<endl;
   }
   //cout<<endl;

   }
   return 0;
}
