#include<bits/stdc++.h>
using namespace std;
int main()
{
   int p,k,r,s,n,i,j,m,t;
   cin>>t;
   for(i=0;;i++)
   {
       if((t>=1)&&(t<=9))
       {
           cout<<t<<endl;break;
       }
       k=0;
       for(j=0;;j++)
       {
           m=t%10;
           k+=m;
           t/=10;
           if(t==0)
           {
               break;
           }
       }
       t=k;
   }
}
