#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s,w;
   cin>>s>>w;
   if(s==w)
   {
       cout<<"-1"<<endl;
   }
   else{
        int a,b;
   a=s.size();
   b=w.size();
    if(a==b)
    {
        cout<<a<<endl;
    }
    else{
        cout<<max(a,b)<<endl;
    }
   }
}
