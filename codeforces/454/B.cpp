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
   int n,i,j,p=0,c;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       if(i!=0)
       {
           if(a[i]<a[i-1])
           {
               c=i;
               p++;
           }
       }
   }
   if(p==0)
   {
       cout<<"0"<<endl;
   }
   else if(p>1)
   {
       cout<<"-1"<<endl;
   }
   else{
    if(a[0]>=a[n-1])
    {
        cout<<n-c<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
   }









}
































