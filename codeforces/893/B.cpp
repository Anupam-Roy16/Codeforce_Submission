#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,i,j,k,p=0,q,r;
   cin>>m;
   for(i=8;i>=1;i--)
   {
       //cin>>n;
       q=pow(2,i);
       q--;
       r=pow(2,i-1);
       q*=r;
       if(m%q==0)
       {
           cout<<q<<endl;
        return 0;
       }
   }
}

