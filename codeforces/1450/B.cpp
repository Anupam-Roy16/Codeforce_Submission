#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,k,t,p,q,i,j,r,s;
   cin>>t;
   for(i=0;i<t;i++)
   {
       cin>>n>>m;
       int a[n][2];
       for(j=0;j<n;j++)
       {
           cin>>a[j][0]>>a[j][1];
       }
       s=0;
       for(j=0;j<n;j++)
       {

           for(k=0;k<n;k++)
           {
               r=0;
               p=abs(a[j][0]-a[k][0]);
               q=abs(a[j][1]-a[k][1]);
               p+=q;
               if(p>m)
               {
                   r++;
                   break;
               }
           }
           if(r==0)
           {
               s++;
               cout<<"1"<<endl;
               break;
           }
       }
       if(s==0)
       {
           cout<<"-1"<<endl;
       }

   }

}
