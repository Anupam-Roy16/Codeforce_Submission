#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t=0,n,e,w,m,i,j,p=0,q,r,s=0;
   cin>>n>>w>>e;
   int a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]==2)
       {
           p++;
       }
   }
   q=(n/2)-1;
   if(p==0)
   {
       for(i=0,j=n-1;i<=q;i++,j--)
       {
           if(a[i]!=a[j])
           {

               cout<<"-1"<<endl;
               return 0;
           }
       }
       cout<<"0"<<endl;
   }
   else{

    for(i=0,j=n-1;i<=q;i++,j--)
       {

           if((a[i]!=a[j])&&(a[i]!=2)&&(a[j]!=2))
           {

               cout<<"-1"<<endl;
               return 0;
           }
       }

      for(i=0,j=n-1;i<=q;i++,j--)
       {

           if(a[i]!=a[j])
           {

            r=min(a[i],a[j]);
            if(r==0)
            {

                s+=w;

            }
            else{
                s+=e;

            }
           }
           else if((a[i]==2)&&(a[j]==2)){
            r=min(w,e);
            s+=(2*r);
           }
       }

       if(n%2!=0)
       {
           n/=2;
           if(a[n]==2)
           {
                r=min(w,e);

            s+=r;

           }
       }

   cout<<s<<endl;
       }
   return 0;
}
