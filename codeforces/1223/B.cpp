#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,d,y,m,t,k,i,j;
   cin>>t;
   char s[101],p[101];
   for(i=0;i<t;i++)
   {
       cin>>s>>p;
       c=strlen(s);
       d=strlen(p);
       sort(s,s+c);
       sort(p,p+d);
       m=0;
       for(k=0;k<c;k++)
       {
           for(y=0;y<d;y++)
           {
               if(s[k]==p[y])
               {
                   m++;
                   cout<<"YES"<<endl;
                   break;
               }
           }
           if(m!=0)
           {
               break;
           }
       }
       if(m==0)
       {
           cout<<"NO"<<endl;
       }
   }

}
