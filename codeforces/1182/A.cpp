
#include<bits/stdc++.h>
using namespace std;
#define ul unsigned long long

ul result(ul p,ul q) // akhane
{
    ul r=1;
    while(q)
    {
        if(q%2==0){
        q/=2;
        p=(p*p);

    }
    else{
        q--;
        r=(r*p);
    }
    }
    return r;
}
int main()
{
  unsigned long long n,m,a=2,b;
  cin>>n;
  if(n%2==0)
  {
n/=2;
   cout<<result(2,n)<<endl;
   }
else{
cout<<"0"<<endl;
}
}