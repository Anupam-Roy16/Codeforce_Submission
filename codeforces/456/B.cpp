#include<bits/stdc++.h>
using namespace std;
int main()
{
   char a[10000000];
   cin>>a;
   int l=strlen(a),m,n;
   if(l>1)
   {
       m=(int)a[l-1]-48;
       n=(int)a[l-2]-48;
       n*=10;
       m+=n;
       m=(m%4);
       int k=pow(2,m)+pow(3,m)+pow(4,m)+1;
       cout<<k%5<<endl;
   }
   else{
         m=(int)a[0]-48;
       int k=pow(2,m)+pow(3,m)+pow(4,m)+1;
   cout<<k%5<<endl;
   }
   return 0;
}
