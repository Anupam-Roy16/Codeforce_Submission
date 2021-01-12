#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,k,i,p=0,q=0,j;
   cin>>n>>m;
   int a[m],b[m],c[m];
   for(i=0;i<m;i++)
   {
       cin>>a[i]>>b[i];
       c[i]=b[i];
   }
   sort(b,b+m);
   for(i=m-1;i>=0;i--)
   {
       for(j=0;;j++)
       {
           if((b[i]==c[j])&&(c[j]!=0))
           {
               c[j]=0;
               break;
           }
       }
       if(p<n)
       {
           k=n-p;

           if(k<=a[j])
           {

               q+=(k*b[i]);
               break;
           }
           else{
            p+=a[j];
            q+=(a[j]*b[i]);
           }
       }
   }
   cout<<q<<endl;
   return 0;
}

