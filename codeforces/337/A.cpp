#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,t=10000000,j,m;
   cin>>n>>m;
   int a[m];
   for(i=0;i<m;i++)
   {
       cin>>a[i];
   }
   sort(a,a+m);
   for(i=0;;i++)
   {
       int p=i+n-1;
       if(p<m)
       {
           int q;
       q=a[p]-a[i];
       
       if(t>q)
       {
           t=q;
       }
       }
       else{
        break;
       }
   }
   cout<<t<<endl;
}
