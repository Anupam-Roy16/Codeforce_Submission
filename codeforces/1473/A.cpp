#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,k,i,p,j,q;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>m>>k;
       int a[m];
       q=0;
       for(j=0;j<m;j++)
       {
           cin>>a[j];
           if(a[j]>k)
           {
               q++;
           }
       }
       if(q!=0)
       {
           sort(a,a+m);
           if((a[0]+a[1])<=k)
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
   return 0;
}

