#include<bits/stdc++.h>
using namespace std;
int main()
{
   unsigned long long a,b,c,d,y,m;
   int t,k,i,j;
   cin>>t;
   for(i=0;i<t;i++)
   {
       cin>>m;
       b=m;
       for(k=0;;k++)
       {
           int p=0;
       for(j=0;;j++)
       {
           a=m%10;
           if((a!=0)&&(b%a!=0))
           {
               p++;
               break;
           }
           m/=10;
           if(m==0)
           {
               break;
           }
       }
       if(p!=0)
       {
           b++;
           m=b;
       }
       else{
        cout<<b<<endl;
        break;
       }
       }
   }

}
