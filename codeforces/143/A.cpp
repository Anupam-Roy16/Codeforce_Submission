#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,d,e,i,j,k,p,q,r,s,f,l;
   cin>>a>>b;
   cin>>c>>d;
   cin>>e>>f;
   p=min(a,c);
   p=min(p,e);
   q=min(a,d);
   q=min(f,q);

   r=min(b,c);
   r=min(r,f);
   s=min(b,d);
   s=min(e,s);
   if(p>10)
   {
       p=10;
   }
   if(q>10)
   {
       q=10;
   }
   if(r>10)
   {
       r=10;
   }
   if(s>10)
   {
       s=10;
   }
   for(i=1;i<p;i++)
   {
       for(j=1;j<q;j++)
       {
           for(k=1;k<r;k++)
           {
               for(l=1;l<s;l++)
               {
                   if((i!=j)&&(i!=k)&&(i!=l)&&(j!=l)&&(j!=k)&&(l!=k)&&((i+k)==c)&&((j+l)==d)&&((i+j)==a)&&((k+l)==b)&&((i+l)==e)&&((j+k)==f))
                   {
                       cout<<i<<" "<<j<<endl;
                       cout<<k<<" "<<l<<endl;
                       return 0;
                   }
               }
           }
       }
   }
   cout<<"-1"<<endl;
}
