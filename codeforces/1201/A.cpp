#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,n,j,m,w=0;
   cin>>n>>m;
   int f[5];
   for(i=0;i<5;i++)
   {
       f[i]=0;
   }
   int g[m];
   char a[n][m];
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           cin>>a[i][j];
       }
   }
   for(i=0;i<m;i++)
   {
       cin>>g[i];
   }

   for(j=0;j<m;j++)
   {
       for(i=0;i<n;i++)
       {
           if(a[i][j]=='A')
           {
               f[0]++;
           }
           if(a[i][j]=='B')
           {
               f[1]++;
           }
           if(a[i][j]=='C')
           {
               f[2]++;
           }
           if(a[i][j]=='D')
           {
               f[3]++;
           }
           if(a[i][j]=='E')
           {
               f[4]++;
           }

       }
       sort(f,f+5);
       w+=(f[4]*g[j]);
       for(i=0;i<5;i++)
       {
           f[i]=0;
       }
   }
cout<<w<<endl;

   return 0;
}
