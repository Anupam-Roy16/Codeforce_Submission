#include <bits/stdc++.h>
using namespace std;
int main()
{
   int p,q,r,s,x,y,n,i,a,b;
   cin>>n;
   while(n--)
   {
       cin>>p>>q>>r>>s>>x>>y;
       if(p==r)
       {
            if(x==p)
            {
                a=min(q,s);
                b=max(q,s);
                if((y>a)&&(y<b))
                {
                    cout<<abs(q-s)+2<<endl;
                }
                else{
                    cout<<abs(q-s)<<endl;
                }
            }
            else{
                cout<<abs(q-s)<<endl;
            }
       }
       else if(q==s)
       {
            if(y==q)
            {
                a=min(r,p);
                b=max(r,p);
                if((x>a)&&(x<b))
                {
                    cout<<abs(p-r)+2<<endl;
                }
                else{
                    cout<<abs(p-r)<<endl;
                }
            }
            else{
                cout<<abs(p-r)<<endl;
            }
       }
       else{
        x=abs(p-r);
        y=abs(q-s);
        cout<<x+y<<endl;
        }
   }
}
