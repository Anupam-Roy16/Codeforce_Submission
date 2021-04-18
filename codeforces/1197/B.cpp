#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,i,j,k,p=0,q,r;
   cin>>n;
   vector<int> v;
   for(i=0;i<n;i++)
   {
       cin>>m;
       v.push_back(m);
   }
   k=max_element(v.begin(),v.end())-v.begin();
   for(i=k-1;i>0;i--)
   {
       if(v[i]<v[i-1])
       {
        cout<<"NO"<<endl;
        return 0;
       }
   }
   for(i=k+1;i<n-1;i++)
   {
       if(v[i]<v[i+1])
       {
           cout<<"NO"<<endl;
           return 0;
       }
   }
   cout<<"YES"<<endl;
}

