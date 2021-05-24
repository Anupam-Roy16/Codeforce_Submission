#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,p,m,q=0,r=0;
   cin>>n>>p;

   vector<int>v;
   for(i=0;i<n;i++)
   {
       cin>>m;
       v.push_back(m);
       if(p>m)
       {
           q++;
       }
       if(m==p)
       {
           r++;
       }
   }

   cout<<p-q+r<<endl;
   return 0;
}
