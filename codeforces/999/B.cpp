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
   int n,i,j,t,p=0,b[100];
   cin>>n;
   char a[n+1],k;
   cin>>a;

   for(i=2;i<=(n/2);i++)
   {
       if((n%i)==0)
       {
           b[p]=i;
           p++;


       }
   }
  b[p]=n;
  p++;
   for(i=0;i<p;i++)
   {
       int t=b[i];
       for(j=0;j<(t/2);j++)
       {
           k=a[j];
           a[j]=a[t-1-j];
           a[t-1-j]=k;
       }

   }

  cout<<a<<endl;

}
































