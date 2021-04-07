#include<bits/stdc++.h>
using namespace std;
int main()
{
   unsigned long long y,p,k,r,s,n,i,j,m;
   int t;
   cin>>t;
   for(i=0;i<t;i++)
   {
       cin>>n>>m>>p;
       s=p%n;
       k=p/n;
       if(s==0)
       {
        s=n;
        s--;
        k--;
       }
       else{
        s--;
       }
       s++;
       k++;
       y=s*m;
       cout<<y-m+k<<endl;

   }
}
