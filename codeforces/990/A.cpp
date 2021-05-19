#include<bits/stdc++.h>
using namespace std;
int main()
{
unsigned long long n,r,p,q,m,a,b;
  cin>>n>>m>>a>>b;
p=n%m;
q=p*b;
r=(m-p)*a;
cout<<min(q,r)<<endl;;
}
