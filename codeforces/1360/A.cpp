#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t,a,b,i;
 cin>>t;
 for(i=0;i<t;i++)
 {
     cin>>a>>b;
     if(a<b)
     {
         if((2*a)<b)
         {
             cout<<b*b<<endl;
         }
         else{
            int m=2*a;
            cout<<m*m<<endl;
         }
     }
     else{
        if((2*b)<a)
         {
             cout<<a*a<<endl;
         }
         else{
            int m=2*b;
            cout<<m*m<<endl;
         }
     }
 }
}
