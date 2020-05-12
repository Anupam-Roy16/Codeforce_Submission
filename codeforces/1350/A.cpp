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
   int t,i,j;
   cin>>t;
   unsigned long long n,k;
   for(i=0;i<t;i++)
   {
       cin>>n>>k;
       if((n%2)==0)
       {
           cout<<n+(2*k)<<endl;
       }
       else{
            int p=0;
        for(j=3;j<=sqrt(n);j++)
        {
            if((n%j)==0)
            {
                p++;
                break;
            }
        }

        if(p!=0)
        {
           cout<<(n+j+(2*(k-1)))<<endl;
        }
        else{
                 cout<<(n+n+(2*(k-1)))<<endl;
        }
       }





   }


}
































