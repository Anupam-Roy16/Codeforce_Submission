#include<bits/stdc++.h>
using namespace std;
int main()
{
   int k,m,n,t,s,x,i;
   cin>>t>>s>>x;
   k=t%s;
   m=x%s;
   if(t>x)
   {
       cout<<"NO"<<endl;
       return 0;
   }
       if(m==k)
       {
           cout<<"YES"<<endl;
       }
       else if(((k+1)==m)&&((t+1)!=x))
       {
           cout<<"YES"<<endl;
       }
       else if((k+1)==s)
       {
           if(((m==0)||(m==k))&&((t+1)!=x))
           {
               cout<<"YES"<<endl;
           }
           else{
            cout<<"NO"<<endl;
           }

       }
        else{
        cout<<"NO"<<endl;
       }

   return 0;
}
