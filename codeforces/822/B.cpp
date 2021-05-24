#include<bits/stdc++.h>
using namespace std;
int main()
{
   int y=100000,n,i,p,m,q,j;
   cin>>n>>p;
   string s,r;
   cin>>s>>r;
   for(i=0;i<=p-n;i++)
   {
       q=0;
       for(j=0;j<n;j++)
       {
           if(s[j]!=r[i+j])
           {
              q++;
           }
       }
       if(q<y)
       {
           y=q;
           m=i;
       }
   }
   int h=0;
   cout<<y<<endl;
   for(i=0;i<n;i++)
   {
      if(s[i]!=r[m+i])
      {
          cout<<i+1;
          h++;
          if(h==y)
      {
          cout<<endl;
      }
      else{
        cout<<" ";
      }
      }

   }
   return 0;
}
