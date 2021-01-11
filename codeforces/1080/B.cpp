#include <bits/stdc++.h>
using namespace std;
int main()
{


   unsigned long long j,m,n,p,q,a,b,c,d;
    int i;
    cin>>n;
    for(i=0;i<n;i++)
    {

        cin>>p>>q;
        m=p%2;
        j=q%2;

        if(m==1&&j==1)
        {
            a=p;b=q-p;
            b++;b/=2;
            b++;
            c=p+1;
            d=b-1;


        }
        else if(m==0&&j==0)
        {
            c=p;d=q-p;d++;
            d/=2;d++;
            a=p+1;
            b=d-1;

        }
        else if(m==0&&j==1)
        {

           c=p;d=q-p;d++;d/=2;
           a=p+1;b=d;
        }
        else{
                a=p;b=q-p;b++;b/=2;
                d=b;c=p+1;

        }
      //  int s,z,r,y;
        //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        cout<<(long long)((c*d)+b+(d*d)-d-(a*b)-(b*b))<<endl;


    }
}
