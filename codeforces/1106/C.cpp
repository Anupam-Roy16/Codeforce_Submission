#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    int a,b,c,p,q,r,s,d;
    cin>>a>>b>>c;
    v=(__gcd(a,b));
    r=(__gcd(a,c))
    p=b/v;
    q=c/r;
    if(p==q)
    {
        cout<<
        return 0;
    }
    v=(__gcd(b,a));
    r=(__gcd(b,c));
    p=a/v;
    q=c/r;

if(p=q)
{
 return 0;
}
    v=(__gcd(b,a));
    r=(__gcd(b,c));
    p=a/v;
    q=c/r;


}
*/
int main()
{
   int i;
   unsigned long long n;
  // cout<<pow(10,2);
   cin>>n;
   unsigned long long a[n],p=0,q,r;
   for(i=0;i<n;i++)
   {
       cin>>a[i];

   }
   sort(a,a+n);
   for(i=0;i<(n/2);i++)
   {
        q=(a[i]+a[n-1-i]);

        r=q*q;

        p+=r;

   }
   cout<<p<<endl;
}
































