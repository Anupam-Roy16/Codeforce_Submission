#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,j,q,p,u=0,k;
   int a[5];
   cin>>n>>k;
   for(i=n;i<=k;i++)
   {
       q=i;
       int r=0;
       while(q!=0)
       {
       p=q%10;
       a[r]=p;
       r++;
       q/=10;
       }
       sort(a,a+r);
       int w=0;
       for(j=0;j<r-1;j++)
       {
           if(a[j]==a[j+1])
           {
               w++;
               break;
           }
       }
       if(w==0)
       {
           u++;
           cout<<i<<endl;
           break;
       }

   }

   if(u==0)
   {
       cout<<"-1"<<endl;
   }

}
