#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,i,j;
   cin>>t;
   for(i=0;i<t;i++)
   {
       int n;
       cin>>n;
       int a[n],b[n],c[n];
       for(j=0;j<n;j++)
       {
           cin>>a[j];
       }
       for(j=0;j<n;j++)
       {
           cin>>b[j];
       }
       int p=0,u=0,e=0,y;
       for(j=0;j<n;j++)
       {
           if(a[j]!=b[j])
           {
               if(a[j]>b[j])
               {
                   u++;
                   cout<<"NO"<<endl;
               break;
               }
               else{
                c[p]=b[j]-a[j];
                p++;
               }


           if(e!=0)
           {
               if((j-y)!=1)
               {
                   u++;
                   cout<<"NO"<<endl;
                   break;
               }
           }
             y=j;
           e++;
           }

       }
       int q=0;
       if(u==0)
       {
           if(p!=1){
           for(j=1;j<p;j++)
           {
               if(c[0]!=c[j])
               {
                  q++;
               }
           }
           if(q==0)
           {
               cout<<"YES"<<endl;
           }
           else{
            cout<<"NO"<<endl;
           }
           }
           else{
            cout<<"YES"<<endl;
           }
       }

   }

   return 0;
}
