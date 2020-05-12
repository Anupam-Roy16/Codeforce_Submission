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
    int t,i,j,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[n],c[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(j=0;j<n;j++)
        {
            cin>>c[j];
        }
        sort(a,a+n);
        sort(c,c+n);
        for(j=0;j<n;j++)
        {
            cout<<a[j];
            if(j!=(n-1))
            {
                cout<<" ";
            }
            else{
                cout<<endl;
            }
        }
        for(j=0;j<n;j++)
        {
            cout<<c[j];
            if(j!=(n-1))
            {
                cout<<" ";
            }
            else{
                cout<<endl;
            }
        }

    }































}
