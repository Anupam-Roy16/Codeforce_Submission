#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       if((i%2)!=0)
       {
           if(i!=1)
           {
               cout<<" ";
           }
           if(i==n){
           cout<<"I hate it";
       }
       else{
        cout<<"I hate that";
       }
           if(i!=n)
           {
               cout<<" ";
           }
       }
       else
       {
           if(i==n){
           cout<<" I love it";
           }
           else{
            cout<<" I love that";
           }
       }
   }

       cout<<"\n";


    return 0;
}
