#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long p,k,n,i,j;
    cin>>n;
    while(n--)
    {
      cin>>p;
      if(p%2050!=0)
      {
          cout<<"-1"<<endl;
          continue;
      }
      p/=2050;
      int q=0;
      while(p)
      {
          q+=(p%10);
          p/=10;
      }
      cout<<q<<endl;
    }
}
