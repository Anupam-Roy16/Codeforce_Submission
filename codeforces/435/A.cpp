#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,j,p=0,q=0,b,c,d,t,k;
   cin>>n>>b;
   int a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }

       for(j=0;j<n;j++)
       {
           p+=a[j];
          // cout<<p<<endl;
           if(p==b)
           {
               q++;
              // cout<<"S";
               p=0;
           }
           else if(p>b){
                q++;
              //  cout<<"e";
                p=a[j];
           }
       }
//cout<<p<<endl;
if(q==0||p!=0){q++;}
   cout<<q<<endl;

   return 0;
}
